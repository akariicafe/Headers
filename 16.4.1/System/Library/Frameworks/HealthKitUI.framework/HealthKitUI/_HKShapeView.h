@class UIBezierPath, CAShapeLayer;

@interface _HKShapeView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
