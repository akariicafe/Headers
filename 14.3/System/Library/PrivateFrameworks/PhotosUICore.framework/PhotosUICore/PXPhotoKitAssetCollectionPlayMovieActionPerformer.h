@interface PXPhotoKitAssetCollectionPlayMovieActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)_systemImageName;

- (id)activitySystemImageName;
- (id)activityType;
- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;

@end
