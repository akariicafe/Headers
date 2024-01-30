@class NSSet;
@protocol PUSelectableAssetCollectionViewLayoutDelegate;

@interface PUSelectableAssetCollectionViewLayout : PUHorizontalCollectionViewLayout

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } sharingBadgeOffset;
@property (retain, nonatomic) NSSet *floatingCellIndexPaths;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (weak, nonatomic) id<PUSelectableAssetCollectionViewLayoutDelegate> delegate;

- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_floatingSelectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atIndexPath:(id)a2;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)a0;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewBounds;

@end
