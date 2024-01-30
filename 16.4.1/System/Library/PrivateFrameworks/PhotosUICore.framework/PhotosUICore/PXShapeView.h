@class UIBezierPath, UIColor;

@interface PXShapeView : UIView

@property (copy, nonatomic) UIBezierPath *path;
@property (copy, nonatomic) UIColor *fillColor;

+ (Class)layerClass;

- (id)shapeLayer;
- (void).cxx_destruct;

@end
