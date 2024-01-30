@class PUHidePhotosActionController;

@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUHidePhotosActionController *hideActionController;
@property (nonatomic) BOOL isHiding;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)performBackgroundTask;

@end
