@class NSArray, PXPhotosDataSource;

@interface PUPhotoKitActionPerformer : PUAssetActionPerformer

@property (readonly, copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;

+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)stopExcludingAssetsFromDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (void)forceIncludeAssetsInDataSource;
- (id)_indexPathsInPhotosDataSource:(id)a0;

@end
