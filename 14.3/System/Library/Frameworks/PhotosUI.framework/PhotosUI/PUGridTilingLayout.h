@interface PUGridTilingLayout : PUSectionedTilingLayout {
    long long _numberOfColumns;
}

@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;

- (void)prepareLayout;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)preferredScrollInfo;
- (struct CGSize { double x0; double x1; })sizeForSection:(long long)a0 numberOfItems:(long long)a1;
- (struct CGSize { double x0; double x1; })estimatedSectionSize;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 section:(long long)a1 toSet:(id)a2;
- (long long)_numberOfColumns;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItemAtIndexPath:(id)a0;
- (id)layoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;

@end
