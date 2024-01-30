@interface PXPhotoKitAssetCollectionRevealInMomentActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createBarButtonItemForAssetCollectionReference:(id)a0 withTarget:(id)a1 action:(SEL)a2;
+ (id)_assetToRevealInAssetCollection:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;

@end
