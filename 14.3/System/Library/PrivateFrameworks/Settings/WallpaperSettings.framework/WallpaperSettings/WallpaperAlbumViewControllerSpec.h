@class PUPhotosGridViewControllerSpec;

@interface WallpaperAlbumViewControllerSpec : NSObject

@property (class, readonly, nonatomic) Class gridSpecClass;

@property (readonly, nonatomic) PUPhotosGridViewControllerSpec *gridSpec;

- (id)init;
- (void).cxx_destruct;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)configureFactoryGridLayout:(id)a0 forWidth:(double)a1 andThumbnailSize:(struct CGSize { double x0; double x1; })a2;

@end
