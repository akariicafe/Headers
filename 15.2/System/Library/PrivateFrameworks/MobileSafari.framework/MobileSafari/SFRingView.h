@class CAShapeLayer;

@interface SFRingView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double radius;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;

@end
