@interface SBUIShapeView : UIView

+ (Class)layerClass;

- (void)setFillColor:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setPath:(id)a0;
- (void)setFillRule:(long long)a0;
- (id)_shapeLayer;

@end
