@class UILabel, UIButton;

@interface PKPaymentPassDetailActivationFooterView : UIView {
    UILabel *_footerTextLabel;
    UIButton *_activationButton;
}

- (void).cxx_destruct;
- (void)setFooterText:(id)a0;
- (void)setActivationButtonTarget:(id)a0 action:(SEL)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setActivationButtonText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
