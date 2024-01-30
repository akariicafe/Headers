@interface PUPXPhotoKitTrashNoConfirmAssetActionPerformer : PUPXPhotoKitTrashAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;

- (BOOL)shouldSkipUserConfirmation;
- (long long)destructivePhotosAction;

@end
