@interface SeymourUI.BeatingHeartView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ beatingImage;
    void /* unknown type, empty encoding */ idleImage;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ fontPointSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
