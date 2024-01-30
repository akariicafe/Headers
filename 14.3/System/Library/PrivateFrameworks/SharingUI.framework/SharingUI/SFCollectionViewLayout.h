@class NSArray;
@protocol SFCollectionViewDelegateLayout;

@interface SFCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } evaluatedInset;
@property (nonatomic) struct CGSize { double width; double height; } evaluatedItemSize;
@property (nonatomic) struct CGSize { double width; double height; } evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (copy, nonatomic) NSArray *preparedLayoutAttributes;
@property (copy, nonatomic) NSArray *preparedUpdateItems;
@property (weak, nonatomic) id<SFCollectionViewDelegateLayout> fallbackDelegate;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (BOOL)shouldReverseLayoutDirection;
- (id)init;
- (void).cxx_destruct;
- (id)_indexPathsForItemsInSection:(long long)a0;
- (struct CGSize { double x0; double x1; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_evaluateInsetForSectionAtIndex:(long long)a0;
- (id)_layoutAttributesForItemAtIndexPath:(id)a0 numberOfItemsInSection:(unsigned long long)a1;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)calculateLayoutValuesForIndexPaths:(id)a0 containerWidth:(double)a1;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { double x0; double x1; })a0 inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 containerWidth:(double)a2 offscreenPeekInFactor:(float)a3;
- (struct CGPoint { double x0; double x1; })firstItemCenterForContainerWidth:(double)a0;

@end
