@class PUAssetHidingHelper;

@interface PUPXPhotoKitHideAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) BOOL isHiding;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
