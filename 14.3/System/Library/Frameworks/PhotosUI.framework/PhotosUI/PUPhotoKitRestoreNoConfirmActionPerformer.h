@interface PUPhotoKitRestoreNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (BOOL)shouldConfirmDestructiveAction;
- (long long)destructivePhotosAction;

@end
