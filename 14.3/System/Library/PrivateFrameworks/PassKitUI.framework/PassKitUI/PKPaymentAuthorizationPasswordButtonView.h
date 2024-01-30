@class NSLayoutConstraint, UIView, NSMutableArray, UIButton;

@interface PKPaymentAuthorizationPasswordButtonView : UIView {
    UIView *_separatorView;
    NSMutableArray *_hiddenConstraints;
    NSLayoutConstraint *_buttonTopPaddingConstraint;
    NSLayoutConstraint *_buttonBottomPaddingConstraint;
    NSLayoutConstraint *_seperatorHeightConstraint;
}

@property (readonly, nonatomic) UIButton *passwordButton;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;

@end
