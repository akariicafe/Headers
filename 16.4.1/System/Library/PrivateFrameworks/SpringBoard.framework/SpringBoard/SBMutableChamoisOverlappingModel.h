@interface SBMutableChamoisOverlappingModel : SBChamoisOverlappingModel

- (void)addItem:(id)a0 withCenter:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (void)setCompactedCenter:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (void)setCoveredByFullyOccludedPeekingItem:(BOOL)a0 forItem:(id)a1;
- (void)setFullyOccluded:(BOOL)a0 forItem:(id)a1;
- (void)setOverlappingScaleAnchorCenter:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (void)setPartiallyOccluded:(BOOL)a0 forItem:(id)a1;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forItem:(id)a1;
- (void)setUnoccludedPeekingCenterForItem:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (void)setUserConfiguredSizeBeforeOverlapping:(struct CGSize { double x0; double x1; })a0 forItem:(id)a1;

@end
