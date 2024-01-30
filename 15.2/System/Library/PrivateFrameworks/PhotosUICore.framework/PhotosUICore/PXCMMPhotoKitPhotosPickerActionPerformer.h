@class UIViewController, PXCMMPhotoKitSession;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer> {
    UIViewController *_photosPickerViewController;
}

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_pickerDidCompleteWithPickedAssets:(id)a0;
- (id)_currentAssets;
- (id)_currentSelectedAssets;

@end
