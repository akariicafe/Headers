@class UIBezierPath, CAShapeLayer;

@interface ShapeView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (void).cxx_destruct;

@end
