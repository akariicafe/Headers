@interface PUPXPhotoKitRemoveAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 selectionSnapshot:(id)a1 person:(id)a2;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
