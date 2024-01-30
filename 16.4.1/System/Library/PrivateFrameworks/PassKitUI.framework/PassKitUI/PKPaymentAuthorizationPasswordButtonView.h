@class NSLayoutConstraint, UIView, NSMutableArray, UIButton;

@interface PKPaymentAuthorizationPasswordButtonView : UIView {
    UIView *_separatorView;
    UIButton *_passwordButton;
    NSMutableArray *_hiddenConstraints;
    NSLayoutConstraint *_buttonTopPaddingConstraint;
    NSLayoutConstraint *_buttonBottomPaddingConstraint;
    NSLayoutConstraint *_seperatorHeightConstraint;
}

- (void)_setupConstraints;
- (void)setHidden:(BOOL)a0;
- (void)setActionTitle:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 action:(id)a1;

@end
