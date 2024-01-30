@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager

@property (retain, nonatomic) PUPhotoKitDataSourceManager *dataSourceManager;
@property (nonatomic) BOOL enableNavigateToPhotos;

+ (Class)actionPerformerClassForActionType:(unsigned long long)a0;

- (id)_photosDataSource;
- (void).cxx_destruct;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0 allowsRemove:(BOOL)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForSettingFavoriteTo:(BOOL)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)a0 withNewStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)a0 assetToSuggestionMap:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)_photoKitAssetsDataSource;
- (BOOL)_actionTypeIsSimple:(unsigned long long)a0;

@end
