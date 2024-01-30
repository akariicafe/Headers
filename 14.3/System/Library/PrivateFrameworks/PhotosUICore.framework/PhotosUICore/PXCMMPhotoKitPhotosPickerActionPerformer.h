@class UIViewController, PXCMMPhotoKitSession;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer> {
    UIViewController *_photosPickerViewController;
}

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_pickerDidCompleteWithPickedAssets:(id)a0;
- (id)_currentAssets;
- (id)_currentSelectedAssets;

@end
