@interface WallpaperAlbumViewControllerPadSpec : WallpaperAlbumViewControllerSpec

+ (Class)gridSpecClass;

- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })_defaultItemSize;
- (void)configureFactoryGridLayout:(id)a0 forWidth:(double)a1 andThumbnailSize:(struct CGSize { double x0; double x1; })a2;
- (double)_gridMargins;
- (double)_minimumItemSpacing;
- (double)_maximumItemSpacing;

@end
