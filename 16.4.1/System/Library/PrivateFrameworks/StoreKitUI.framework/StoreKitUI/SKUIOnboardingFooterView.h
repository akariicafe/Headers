@class UIButton, SKUIOnboardingProgressView;

@interface SKUIOnboardingFooterView : UIView {
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (readonly, nonatomic) UIButton *leftButton;
@property (readonly, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) SKUIOnboardingProgressView *progressView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_hideButton:(id)a0 withAnimation:(long long)a1;
- (id)_newButton;
- (void)_showButton:(id)a0 withTitle:(id)a1 animation:(long long)a2;
- (void)hideLeftButtonWithAnimation:(long long)a0;
- (void)hideRightButtonWithAnimation:(long long)a0;
- (void)showLeftButtonWithTitle:(id)a0 animation:(long long)a1;
- (void)showRightButtonWithTitle:(id)a0 animation:(long long)a1;

@end
