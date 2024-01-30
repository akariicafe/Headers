@class CAGradientLayer, NSArray, CAShapeLayer, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer

@property (retain, nonatomic) CAGradientLayer *gradient;
@property (retain, nonatomic) CAShapeLayer *shapeMask;
@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;
@property (copy) NSString *type;

- (void)setLineWidth:(double)a0;
- (void)setPath:(struct CGPath { } *)a0;
- (void)setFillColor:(struct CGColor { } *)a0;
- (void)setStrokeColor:(struct CGColor { } *)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setStrokeStart:(double)a0;
- (void)setFillRule:(id)a0;
- (void)setLineCap:(id)a0;
- (void)setLineDashPattern:(id)a0;
- (void)setLineDashPhase:(double)a0;
- (void)setLineJoin:(id)a0;
- (void)setMiterLimit:(double)a0;
- (void)setStrokeEnd:(double)a0;
- (BOOL)isGradientTree;
- (void)p_createGradientTreeIfNeeded;
- (void)p_flatten;

@end
