@interface PUPhotoKitSyndicationDeleteNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (long long)destructivePhotosAction;
- (BOOL)shouldConfirmDestructiveAction;

@end
