@class NSString, UIViewController;

@interface PXPhotoKitAssetCollectionPickerActionPerformer : PXPhotoKitAssetCollectionActionPerformer <UIAdaptivePresentationControllerDelegate, PHPickerViewControllerDelegate> {
    UIViewController *_pickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_dismissPickerControllerAndCompleteTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleAddAssets:(id)a0 toMemory:(id)a1;
- (void)_handleAddAssets:(id)a0 toRegularAlbum:(id)a1;
- (void)_handlePickedAssets:(id)a0;

@end
