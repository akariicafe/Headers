@class NSDictionary;

@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout>

@property (retain, nonatomic) NSDictionary *cachedLayoutAttributes;
@property (nonatomic) struct CGSize { double width; double height; } cachedCollectionViewContentSize;
@property (nonatomic) long long indexOfVisibleItemForBoundsChange;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (double)itemWidth;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;
- (double)_spaceBetweenItems;
- (double)_neighboringItemVisibleWidth;
- (long long)_indexOfVisibleItemForContentOffset:(struct CGPoint { double x0; double x1; })a0 collectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })_contentOffsetForItemAtIndex:(long long)a0 collectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setIndexOfVisibleItem:(unsigned long long)a0 animated:(BOOL)a1;
- (unsigned long long)indexOfVisibleItem;
- (double)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIndexOfVisibleItem:(unsigned long long)a0;

@end
