@class NSString, UITextField;

@interface OBComplexPasscodeInputView : OBPasscodeInputView <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)passcode;
- (id)passcodeDisplayView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numericOnly:(BOOL)a1;
- (void)setPasscode:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
