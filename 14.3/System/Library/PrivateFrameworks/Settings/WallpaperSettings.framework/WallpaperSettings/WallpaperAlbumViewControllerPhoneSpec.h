@interface WallpaperAlbumViewControllerPhoneSpec : WallpaperAlbumViewControllerSpec

+ (Class)gridSpecClass;

- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)configureFactoryGridLayout:(id)a0 forWidth:(double)a1 andThumbnailSize:(struct CGSize { double x0; double x1; })a2;

@end
