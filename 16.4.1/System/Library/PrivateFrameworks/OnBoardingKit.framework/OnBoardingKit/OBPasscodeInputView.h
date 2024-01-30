@protocol OBPasscodeInputViewDelegate;

@interface OBPasscodeInputView : UIView

@property (weak, nonatomic) id<OBPasscodeInputViewDelegate> delegate;

- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setPasscode:(id)a0;
- (id)passcode;
- (void).cxx_destruct;
- (id)passcodeField;
- (void)shake;

@end
