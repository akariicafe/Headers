@class PUAssetHidingHelper;

@interface PUPXPhotoKitHideAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) BOOL isHiding;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (void).cxx_destruct;

@end
