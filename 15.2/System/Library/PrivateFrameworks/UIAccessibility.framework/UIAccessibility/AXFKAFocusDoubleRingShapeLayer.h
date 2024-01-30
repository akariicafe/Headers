@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer

@property (retain, nonatomic) AXFKAFocusRingBorderShapeLayer *topBorderLayer;

- (void)setPath:(struct CGPath { } *)a0;
- (void)updateAppearance;
- (void).cxx_destruct;
- (id)init;
- (void)_updateTopLayerPath;
- (double)lineWidthForTopLayer;
- (struct CGColor { } *)strokeColorForTopLayer;
- (id)topLayerFocusRingColorForTintColor:(id)a0;

@end
