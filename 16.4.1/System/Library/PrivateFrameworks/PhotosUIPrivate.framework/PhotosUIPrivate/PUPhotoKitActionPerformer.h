@class NSArray, PXPhotosDataSource;

@interface PUPhotoKitActionPerformer : PUAssetActionPerformer

@property (readonly, copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)a0;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (void)stopExcludingAssetsFromDataSource;

@end
