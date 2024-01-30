@class NSString, UITextField;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_layout;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)passcode;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setPasscode:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numericOnly:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)passcodeDisplayView;

@end
