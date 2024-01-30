@class NSDictionary;

@interface _TVCarouselCollectionViewLayout : UICollectionViewLayout {
    NSDictionary *_layoutAttributesByIndexPath;
}

@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double minimumInteritemSpacing;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)_expectedNumberOfCells;

@end
