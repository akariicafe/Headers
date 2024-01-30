@interface SBChamoisOverlappingController : NSObject {
    BOOL _reentrancyGuard;
}

- (id)_overlappingScaleAnchorCentersForModel:(id)a0 chamoisLayoutAttributes:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForModel:(id)a0;
- (id)_columnsOfItemsSortedByXInModel:(id)a0 withItemsSortedByX:(id)a1 modelBeforeDragging:(id)a2 chamoisLayoutAttributes:(id)a3 draggingItem:(id)a4;
- (void)_compactSpacingHorizontallyForModel:(id)a0 withColumns:(id)a1 chamoisLayoutAttributes:(id)a2;
- (void)_compactSpacingVerticallyForModel:(id)a0 withColumns:(id)a1 chamoisLayoutAttributes:(id)a2;
- (void)_constrainModelHorizontally:(id)a0 toStageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_constrainModelVertically:(id)a0 toStageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_dodgeFullyOccludedWindowsToNearestVisibleEdgeInModel:(id)a0 chamoisLayoutAttributes:(id)a1 draggingItem:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_expandSpacingHorizontallyForModel:(id)a0 withColumns:(id)a1 modelBeforeDragging:(id)a2 chamoisLayoutAttributes:(id)a3 draggingItem:(id)a4 stageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (void)_expandSpacingVerticallyForModel:(id)a0 withColumns:(id)a1 chamoisLayoutAttributes:(id)a2 stageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_flagItemsCoveredByFullyOccludedPeekingItemsInModel:(id)a0 chamoisLayoutAttributes:(id)a1;
- (id)_fullyOccludedItemsInModel:(id)a0 chamoisLayoutAttributes:(id)a1;
- (void)_horizontallyCenterModel:(id)a0 stageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_isColumnOfItems:(id)a0 equalToColumnOfItems:(id)a1;
- (id)_itemsSortedByXInModel:(id)a0 modelBeforeDragging:(id)a1 chamoisLayoutAttributes:(id)a2 draggingItem:(id)a3;
- (id)_modelByPerformingAutoLayoutForModel:(id)a0 chamoisLayoutAttributes:(id)a1 draggingItem:(id)a2 modelBeforeDragging:(id)a3 floatingDockHeight:(double)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 screenScale:(double)a6 prefersStripHidden:(BOOL)a7 prefersDockHidden:(BOOL)a8 stageInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a9;
- (void)_snapPositionToNearestEdgesIfNecessary:(id)a0 draggingItem:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stageAreaForModel:(id)a0 chamoisLayoutAttributes:(id)a1 floatingDockHeight:(double)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 prefersStripHidden:(BOOL)a4 prefersDockHidden:(BOOL)a5 widthThresholdToHideContinuousExposeStrip:(double)a6;
- (double)_totalWidthOfColumns:(id)a0 inModel:(id)a1 chamoisLayoutAttributes:(id)a2;
- (void)_verticallyCenterModel:(id)a0 withColumns:(id)a1 stageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_widthThresholdToHideContinuousExposeStripForModel:(id)a0 chamoisLayoutAttributes:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)modelByPerformingAutoLayoutForModel:(id)a0 chamoisLayoutAttributes:(id)a1 draggingItem:(id)a2 modelBeforeDragging:(id)a3 floatingDockHeight:(double)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 screenScale:(double)a6 prefersStripHidden:(BOOL)a7 prefersDockHidden:(BOOL)a8;

@end
