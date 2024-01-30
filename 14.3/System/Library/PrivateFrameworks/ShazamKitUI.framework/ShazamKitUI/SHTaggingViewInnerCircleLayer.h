@class CALayer, CAShapeLayer;

@interface SHTaggingViewInnerCircleLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *circle;
@property (retain, nonatomic) CALayer *circleContainerLayer;

- (void)setup;
- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGPath { } *)circlePathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
