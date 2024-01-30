@interface VideosUI.CountDownProgressView : UIView <CAAnimationDelegate> {
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ lineWidth;
    void /* unknown type, empty encoding */ lineColor;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ imageTintColor;
    void /* unknown type, empty encoding */ imageSymbolConfig;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ circle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ isAnimating;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
