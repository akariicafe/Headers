@interface PUPXPhotoKitRestoreAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;

- (long long)destructivePhotosAction;

@end
