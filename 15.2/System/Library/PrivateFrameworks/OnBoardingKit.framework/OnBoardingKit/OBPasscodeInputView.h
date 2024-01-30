@protocol OBPasscodeInputViewDelegate;

@interface OBPasscodeInputView : UIView

@property (weak, nonatomic) id<OBPasscodeInputViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (void)shake;
- (id)passcode;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setPasscode:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)passcodeField;

@end
