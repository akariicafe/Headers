@interface PUPXPhotoKitDeleteAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnImplicitSelection;

- (long long)destructivePhotosAction;

@end
