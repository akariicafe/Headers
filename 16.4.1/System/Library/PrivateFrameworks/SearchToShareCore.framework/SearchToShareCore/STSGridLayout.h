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

- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayout;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_availableContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_gridFrameForRow:(unsigned long long)a0 andColumn:(unsigned long long)a1 inSize:(struct CGSize { double x0; double x1; })a2;
- (id)_gridLayoutDelegate;
- (id)_gridTilesForCurrentDataSource;
- (BOOL)_hasOnlyLargeItems;
- (void)_redistributeLastRowItemsInTiles:(id)a0 withTilesPerRow:(unsigned long long)a1;
- (id)_tileSmallFramesForSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_tilesPerRowAndWidth:(double *)a0;
- (long long)maximumCellsPerRow;

@end
