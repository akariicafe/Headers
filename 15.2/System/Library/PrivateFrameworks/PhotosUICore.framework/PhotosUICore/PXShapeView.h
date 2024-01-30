@class UIBezierPath, UIColor;

@interface PXShapeView : UIView

@property (copy, nonatomic) UIBezierPath *path;
@property (copy, nonatomic) UIColor *fillColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)shapeLayer;

@end
