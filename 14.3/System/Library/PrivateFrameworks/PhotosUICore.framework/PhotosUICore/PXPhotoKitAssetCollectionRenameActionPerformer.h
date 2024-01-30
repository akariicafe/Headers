@class UIAlertAction;

@interface PXPhotoKitAssetCollectionRenameActionPerformer : PXPhotoKitAssetCollectionActionPerformer

@property (retain, nonatomic) UIAlertAction *renameAction;

+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)_updateRenameActionWithTextField:(id)a0;
- (void)_handleRenameConfirmedWithAlert:(id)a0;
- (void).cxx_destruct;

@end
