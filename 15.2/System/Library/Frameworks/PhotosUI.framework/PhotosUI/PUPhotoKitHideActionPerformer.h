@class PUAssetHidingHelper;

@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) BOOL isHiding;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
