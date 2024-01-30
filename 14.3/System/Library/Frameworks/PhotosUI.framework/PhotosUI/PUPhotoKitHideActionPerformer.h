@class PUAssetHidingHelper;

@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) BOOL isHiding;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (void).cxx_destruct;

@end
