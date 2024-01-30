@class UIViewController, NSArray, NSString, PXCMMPhotoKitSession;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIViewController *_photosPickerViewController;
}

@property (readonly, nonatomic) NSArray *currentAssetIdentifiers;
@property (readonly, nonatomic) PXCMMPhotoKitSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
