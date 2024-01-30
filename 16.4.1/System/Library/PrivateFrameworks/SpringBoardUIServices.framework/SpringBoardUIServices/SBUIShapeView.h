@interface SBUIShapeView : UIView

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setPath:(id)a0;
- (void)setFillColor:(id)a0;
- (id)_shapeLayer;
- (void)setFillRule:(long long)a0;

@end
