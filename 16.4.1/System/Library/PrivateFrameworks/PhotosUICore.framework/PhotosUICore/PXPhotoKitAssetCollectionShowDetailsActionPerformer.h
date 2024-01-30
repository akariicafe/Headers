@interface PXPhotoKitAssetCollectionShowDetailsActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (long long)_originForAssetCollection:(id)a0;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (id)_displayTitleInfoForDetailsOfAssetCollection:(id)a0 withTitleCategory:(long long)a1 preferredAttributesPromise:(id /* block */)a2;
- (id)_localizedTitleForAssetCollection:(id)a0 titleCategory:(long long *)a1;

@end
