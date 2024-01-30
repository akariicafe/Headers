@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer

@property (retain, nonatomic) AXFKAFocusRingBorderShapeLayer *topBorderLayer;

- (void)updateAppearance;
- (id)init;
- (void).cxx_destruct;
- (void)_updateTopLayerPath;
- (double)lineWidthForTopLayer;
- (struct CGColor { } *)strokeColorForTopLayer;
- (id)topLayerFocusRingColorForTintColor:(id)a0;
- (void)setPath:(struct CGPath { } *)a0;

@end
