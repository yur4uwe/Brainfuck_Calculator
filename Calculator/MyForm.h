#pragma once
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <math.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <stack>
#include <stdexcept>
#include <algorithm>



namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	std::unordered_map<char, int> order = { 
		{'+', 1},
		{'-', 1},
		{'*', 2},
		{'/', 2},
		{'^', 3}
	};
	std::unordered_set<std::string> operators = { "+","-","*","/","^" };

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ EqualTo;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox2;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->EqualTo = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(32, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(113, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(194, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(194, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 5;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(113, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(32, 270);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 3;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(194, 351);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(113, 351);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(32, 351);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 6;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// EqualTo
			// 
			this->EqualTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EqualTo->Location = System::Drawing::Point(194, 432);
			this->EqualTo->Name = L"EqualTo";
			this->EqualTo->Size = System::Drawing::Size(75, 75);
			this->EqualTo->TabIndex = 11;
			this->EqualTo->Text = L"=";
			this->EqualTo->UseVisualStyleBackColor = true;
			this->EqualTo->Click += gcnew System::EventHandler(this, &MyForm::EqualTo_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(113, 432);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 75);
			this->button11->TabIndex = 10;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(32, 432);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 75);
			this->button12->TabIndex = 9;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(275, 432);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 75);
			this->button13->TabIndex = 15;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(275, 351);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 75);
			this->button14->TabIndex = 14;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(275, 270);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 75);
			this->button15->TabIndex = 13;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(275, 189);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 75);
			this->button16->TabIndex = 12;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(33, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(318, 35);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(33, 108);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 75);
			this->button10->TabIndex = 17;
			this->button10->Text = L"C";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Clear);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(113, 107);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 75);
			this->button17->TabIndex = 18;
			this->button17->Text = L"(";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(194, 107);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 75);
			this->button18->TabIndex = 19;
			this->button18->Text = L")";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(276, 107);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 75);
			this->button19->TabIndex = 20;
			this->button19->Text = L"^";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(33, 69);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(318, 35);
			this->textBox2->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 572);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->EqualTo);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int op_count = 1;
		int oper_count = 0;
		int brack_open = 0;

		bool isOperator(std::string c) {
			return operators.find(c) != operators.end();
		}

		bool isOperator(char c) {
			return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
		}

		int getPrecedence(char op) {
			return order[op];
		}

		bool isOperand(char ch) {
			return isalnum(ch);
		}

		std::vector<std::string> reverse(const std::vector<std::string> tokens) {
			std::vector<std::string> res(tokens.rbegin(), tokens.rend());
			return res;
		}

		std::vector<std::string> infixToPrefix(const std::string& infixExpression) {
			std::stack<char> operatorsStack;
			std::stack<std::string> operandsStack;
			std::vector<std::string> result;

			for (int i = infixExpression.length() - 1; i >= 0; --i) {
				char ch = infixExpression[i];

				if (ch == ')') {
					operatorsStack.push(ch);
				}
				else if (ch == '(') {
					while (!operatorsStack.empty() && operatorsStack.top() != ')') {
						operandsStack.push(std::string(1, operatorsStack.top()));
						operatorsStack.pop();
					}
					operatorsStack.pop();  // Pop the corresponding ')'
				}
				else if (isOperand(ch)) {
					int j = i;
					std::string myStr = "";
					bool decimalPointFound = false;

					while (j >= 0 && (isOperand(infixExpression[j]) || (!decimalPointFound && infixExpression[j] == '.'))) {
						if (infixExpression[j] == '.') {
							decimalPointFound = true;
						}
						myStr = infixExpression[j] + myStr;
						--j;
					}

					i = j + 1;
					operandsStack.push(myStr);
				}
				else if (isOperator(ch)) {
					while (!operatorsStack.empty() && getPrecedence(operatorsStack.top()) >= getPrecedence(ch)) {
						operandsStack.push(std::string(1, operatorsStack.top()));
						operatorsStack.pop();
					}
					operatorsStack.push(ch);
				}
			}

			while (!operatorsStack.empty()) {
				operandsStack.push(std::string(1, operatorsStack.top()));
				operatorsStack.pop();
			}

			while (!operandsStack.empty()) {
				result.push_back(operandsStack.top());
				operandsStack.pop();
			}

			return result;
			
		}

		double FindResult(std::vector<std::string>& tokens) {
			std::vector<double> stack;

			for (const auto& token : tokens) {
				if (!isOperator(token)) {
					double operand = std::stod(token);
					stack.push_back(operand);
				}
				else {
					double operand1 = stack.back();
					stack.pop_back();
					double operand2 = stack.back();
					stack.pop_back();

					if (token == "+") {
						stack.push_back(operand1 + operand2);
					}
					else if (token == "-") {
						stack.push_back(operand1 - operand2);
					}
					else if (token == "*") {
						stack.push_back(operand1 * operand2);
					}
					else if (token == "/") {
						if (operand2 != 0) {
							if (operand1 * operand2 > 0)
								stack.push_back(floor(operand1 / operand2));
							else
								stack.push_back(ceil(operand1 / operand2));
						}
						else {
							// Handle division by zero error
							textBox2->Text = "Error: Division by zero is impossible\n";
							return 0; // or handle this case more gracefully
						}
					}
					else if (token == "^") {
						stack.push_back(Math::Pow(operand1, operand2));
					}
					else {
						// Handle unsupported operator error
						textBox2->Text = "Error: Unsupported operator\n";
						return 0; // or handle this case more gracefully
					}
				}
			}

			return stack.back();
		}

		void CalculateExpression() 
		{
			std::string expression = msclr::interop::marshal_as<std::string>(textBox1->Text) + std::string(brack_open, ')');

			std::vector<std::string> prefExpr = infixToPrefix(expression);

			double result = FindResult(reverse(prefExpr));

			textBox2->Text = result.ToString();
		}

	private: System::Void buttonClick(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::Button^ clickedButton = dynamic_cast<System::Windows::Forms::Button^>(sender);
		std::string lastsymb = "";
		std::string newSymb = msclr::interop::marshal_as<std::string>(clickedButton->Text);
		if (newSymb == "(") {
			brack_open++;
		}
		else if (newSymb == ")") {
			brack_open--;
		}
		std::string expr = msclr::interop::marshal_as<std::string>(textBox1->Text);


		if (textBox1->Text == "0" && !isOperator(newSymb)) {
			if (newSymb == "(") {
				op_count--;
			}	
			textBox1->Text = msclr::interop::marshal_as<System::String^>(newSymb);
			return;
		}

		if (textBox1->Text != "") {
			lastsymb = expr.substr(expr.size() - 1, 1);
		}

		if (isOperator(lastsymb) && isOperator(newSymb)) {
			expr = expr.substr(0, expr.size() - 1);
			expr += newSymb;
			textBox1->Text = msclr::interop::marshal_as<System::String^>(expr);
		}
		else {
			expr += newSymb;
			if (isOperator(newSymb)) {
				if (op_count - 2 * oper_count == 0) {
					op_count++;
				}
				oper_count++;
			}
			else if ((isOperator(lastsymb) || lastsymb == "(") && isOperand(newSymb[0])) {
				op_count++;
			}
			textBox1->Text = msclr::interop::marshal_as<System::String^>(expr);
			
		}
	}

	private: System::Void EqualTo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CalculateExpression();
	}

	private: System::Void Clear(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = "0";
		textBox2->Text = "";
		op_count = 1;
		oper_count = 0;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (op_count - 2 * oper_count == 0 && op_count != oper_count) {
			CalculateExpression();
		}
		else {
			textBox2->Text = "Not Enough Operands";
		}
	}
};
}
