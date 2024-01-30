@interface VideosUI.MessageLockupView : UIView {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ logoImageView;
    void /* unknown type, empty encoding */ labelContainerView;
    void /* unknown type, empty encoding */ labels;
    void /* unknown type, empty encoding */ decorationImageView;
    void /* unknown type, empty encoding */ dividerView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)handleTapGestureWithSender:(id)a0;

@end
