@interface SeymourUI.SessionInclineView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ walkingImageView;
    void /* unknown type, empty encoding */ runningImageView;
    void /* unknown type, empty encoding */ walkingImage;
    void /* unknown type, empty encoding */ runningImage;
    void /* unknown type, empty encoding */ walkingValueLabel;
    void /* unknown type, empty encoding */ runningValueLabel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
