@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 selectionSnapshot:(id)a1 person:(id)a2;

- (long long)destructivePhotosAction;

@end
