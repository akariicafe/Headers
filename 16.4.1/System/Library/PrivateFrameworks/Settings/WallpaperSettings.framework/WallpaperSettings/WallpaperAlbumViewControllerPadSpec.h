@interface WallpaperAlbumViewControllerPadSpec : WallpaperAlbumViewControllerSpec

+ (Class)gridSpecClass;

- (double)_maximumItemSpacing;
- (double)_minimumItemSpacing;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })_defaultItemSize;
- (double)_gridMargins;
- (void)configureFactoryGridLayout:(id)a0 forWidth:(double)a1 andThumbnailSize:(struct CGSize { double x0; double x1; })a2;

@end
