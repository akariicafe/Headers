@interface _TVMLShelfViewLayout : _TVShelfViewLayout

@property (nonatomic) struct TVCellMetrics { struct CGSize { double width; double height; } cellSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellPadding; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellInset; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellInsetAlt; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellMargin; } cellMetrics;
@property (nonatomic) double showcaseFactor;
@property (nonatomic) double cachedTallestHeaderHeight;

- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)init;
- (id /* block */)_animationForReusableView:(id)a0 toLayoutAttributes:(id)a1 type:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)headerAllowance;
- (id)contentRowMetricsForShowcase:(BOOL)a0;
- (double)expectedLineSpacing;

@end
