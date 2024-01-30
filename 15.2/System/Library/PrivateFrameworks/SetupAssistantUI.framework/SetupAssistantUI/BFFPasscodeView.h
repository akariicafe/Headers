@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView {
    BFFPasscodeInputView *_passcodeInputView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentKeyboardFrame;
@property (weak, nonatomic) UIViewController *passcodeViewController;

- (void)layoutSubviews;
- (id)passcodeInputView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)alwaysBounceVertical;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;
- (void)transitionToPasscodeInput:(id)a0 delegate:(id)a1;
- (void)animateTransitionToPasscodeInput:(id)a0 animation:(unsigned long long)a1;

@end
