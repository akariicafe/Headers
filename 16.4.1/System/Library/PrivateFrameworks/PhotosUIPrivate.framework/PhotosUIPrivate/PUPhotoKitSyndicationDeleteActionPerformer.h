@interface PUPhotoKitSyndicationDeleteActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (long long)destructivePhotosAction;

@end
