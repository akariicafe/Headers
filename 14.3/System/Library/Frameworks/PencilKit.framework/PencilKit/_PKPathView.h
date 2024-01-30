@class UIBezierPath, UIColor;

@interface _PKPathView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) UIColor *fillColor;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_shapeLayer;

@end
