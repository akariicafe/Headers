@interface PXPhotoKitAssetCollectionSetScreensaverActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;

@end
