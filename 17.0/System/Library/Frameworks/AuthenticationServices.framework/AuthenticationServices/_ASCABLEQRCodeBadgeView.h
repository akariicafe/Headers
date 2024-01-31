@class UIImageView, NSLayoutConstraint, UIView;

@interface _ASCABLEQRCodeBadgeView : UIView {
    UIView *_platterView;
    UIImageView *_iconView;
    NSLayoutConstraint *_iconOffsetXConstraint;
    NSLayoutConstraint *_iconOffsetYConstraint;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_passkeyIcon;
- (void)_updateLayoutMetricsWithFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
