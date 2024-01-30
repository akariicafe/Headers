@interface PUPXPhotoKitDeleteAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)a0;
+ (BOOL)canPerformOnSubsetOfSelection;

- (long long)destructivePhotosAction;

@end
