@class NSCache, PUFilmstripDataSource;

@interface PUFilmstripTilingLayout : PUTilingLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentBounds;
    long long _numberOfItems;
    struct CGSize { double width; double height; } _itemSize;
    NSCache *_layoutInfoCache;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) PUFilmstripDataSource *dataSource;

- (id)layoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (id)preferredScrollInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)prepareLayout;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)_layoutInfoForTileWithIndex:(long long)a0 kind:(id)a1;
- (id)_layoutInfoForIndicatorInfo:(id)a0 withIndex:(long long)a1;

@end
