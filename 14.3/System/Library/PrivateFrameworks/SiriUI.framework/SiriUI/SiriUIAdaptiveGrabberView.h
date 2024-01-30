@interface SiriUIAdaptiveGrabberView : UIControl

@property (nonatomic) long long style;

+ (Class)layerClass;

- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)_commonInit;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupWithStyle:(long long)a0 animated:(BOOL)a1;
- (id)_bezierPathForStyle:(long long)a0;

@end
