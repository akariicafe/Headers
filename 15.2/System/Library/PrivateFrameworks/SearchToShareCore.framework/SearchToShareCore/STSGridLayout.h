@class NSMutableDictionary, NSDictionary, UICollectionViewLayoutAttributes, NSNumber;

@interface STSGridLayout : UICollectionViewLayout {
    NSDictionary *_headerAttributes;
    NSDictionary *_cellAttributes;
    NSDictionary *_tileAttributes;
    UICollectionViewLayoutAttributes *_footerAttributes;
    NSMutableDictionary *_tileSmallFrameCache;
    NSNumber *_hasOnlyLargeItems;
    double _contentSizeMaxY;
}

@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double itemSpacing;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_hasOnlyLargeItems;
- (id)_gridTilesForCurrentDataSource;
- (struct CGSize { double x0; double x1; })_availableContentSize;
- (unsigned long long)_tilesPerRowAndWidth:(double *)a0;
- (id)_tileSmallFramesForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_gridLayoutDelegate;
- (void)_redistributeLastRowItemsInTiles:(id)a0 withTilesPerRow:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_gridFrameForRow:(unsigned long long)a0 andColumn:(unsigned long long)a1 inSize:(struct CGSize { double x0; double x1; })a2;
- (long long)maximumCellsPerRow;

@end
