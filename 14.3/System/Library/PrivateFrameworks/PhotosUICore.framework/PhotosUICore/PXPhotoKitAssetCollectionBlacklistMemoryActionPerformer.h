@interface PXPhotoKitAssetCollectionBlacklistMemoryActionPerformer : PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer

+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createAlertActionWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (id)disambiguationMenuForUseCase:(unsigned long long)a0 withMenuActionHandler:(id /* block */)a1;
- (id)_disambiguationActionsForAlert:(BOOL)a0 withActionHandler:(id /* block */)a1;
- (BOOL)_doesUserActionRequireDisambiguation:(id)a0 outResolvedAction:(id *)a1 outAlertActionsForDisambiguation:(id *)a2 alertActionHandler:(id /* block */)a3;
- (BOOL)_didUserConfirmDeleteOfMemory;

@end
