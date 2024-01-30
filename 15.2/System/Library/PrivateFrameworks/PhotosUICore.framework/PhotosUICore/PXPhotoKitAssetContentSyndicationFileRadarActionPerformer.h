@interface PXPhotoKitAssetContentSyndicationFileRadarActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void)performUserInteractionTask;
- (BOOL)requiresUnlockedDevice;

@end
