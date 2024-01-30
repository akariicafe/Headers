@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView {
    BFFPasscodeInputView *_passcodeInputView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentKeyboardFrame;
@property (weak, nonatomic) UIViewController *passcodeViewController;

- (BOOL)alwaysBounceVertical;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)transitionToPasscodeInput:(id)a0 delegate:(id)a1;
- (id)passcodeInputView;
- (void)animateTransitionToPasscodeInput:(id)a0 animation:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyboardWillShow:(id)a0;

@end
