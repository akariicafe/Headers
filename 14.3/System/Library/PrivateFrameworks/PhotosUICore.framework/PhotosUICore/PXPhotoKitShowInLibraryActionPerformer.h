@interface PXPhotoKitShowInLibraryActionPerformer : PXPhotoKitAssetActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)_assetToRevealFromAsset:(id)a0;

- (void)performUserInteractionTask;

@end
