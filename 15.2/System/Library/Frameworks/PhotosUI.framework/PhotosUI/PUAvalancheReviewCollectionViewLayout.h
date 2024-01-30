@class NSIndexPath;
@protocol PUAvalancheReviewCollectionViewLayoutDelegate;

@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } sharingBadgeOffset;
@property (retain, nonatomic) NSIndexPath *zoomingCellIndexPath;
@property (weak, nonatomic) id<PUAvalancheReviewCollectionViewLayoutDelegate> delegate;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_floatingSelectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atIndexPath:(id)a2;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)a0;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_supportsAdvancedTransitionAnimations;

@end
