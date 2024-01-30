@class WFTextTokenTextField, NSString, NSSet;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberField : UIView <UITextFieldDelegate>

@property (weak, nonatomic) WFTextTokenTextField *textField;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL allowsDecimalNumbers;
@property (nonatomic) BOOL allowsNegatingNumbers;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) long long keyboardAppearance;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)negateText;

@end
