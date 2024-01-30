@class UIButton, SKUIOnboardingProgressView;

@interface SKUIOnboardingFooterView : UIView {
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (readonly, nonatomic) UIButton *leftButton;
@property (readonly, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) SKUIOnboardingProgressView *progressView;

- (void)layoutSubviews;
- (id)_newButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)hideLeftButtonWithAnimation:(long long)a0;
- (void)showLeftButtonWithTitle:(id)a0 animation:(long long)a1;
- (void)hideRightButtonWithAnimation:(long long)a0;
- (void)showRightButtonWithTitle:(id)a0 animation:(long long)a1;
- (void)_hideButton:(id)a0 withAnimation:(long long)a1;
- (void)_showButton:(id)a0 withTitle:(id)a1 animation:(long long)a2;

@end
