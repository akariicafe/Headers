@class UIBezierPath, UIColor, CAShapeLayer;

@interface _UIGlintyShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) UIColor *fillColor;
@property (readonly, nonatomic) UIColor *strokeColor;

+ (Class)layerClass;

- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPath:(id)a0;

@end
