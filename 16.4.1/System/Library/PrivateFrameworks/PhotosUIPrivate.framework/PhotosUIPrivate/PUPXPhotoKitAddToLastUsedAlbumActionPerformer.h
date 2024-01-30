@interface PUPXPhotoKitAddToLastUsedAlbumActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void)performBackgroundTask;

@end
