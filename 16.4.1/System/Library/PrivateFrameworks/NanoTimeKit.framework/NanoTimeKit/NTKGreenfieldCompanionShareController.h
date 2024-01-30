@class NSString, NTKFace, NTKGreenfieldCompanionActivityViewController, UIViewController;

@interface NTKGreenfieldCompanionShareController : NSObject <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> {
    NTKFace *_face;
    NTKFace *_updatedFace;
    UIViewController *_originatedViewController;
    NTKGreenfieldCompanionActivityViewController *_activityViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)_handleError:(id)a0;
- (void).cxx_destruct;
- (void)_prepareForShareSheet;
- (void)_presentInternalWarningIfNeededWithContinueBlock:(id /* block */)a0;
- (void)_presentShareSheetWithDraftRecipe:(id)a0 previewImage:(id)a1;
- (void)_showPhotosPickerView;
- (void)_startFaceSharing;
- (void)companionSharePhotosPickerViewController:(id)a0 didFinishWithFace:(id)a1;
- (void)shareWatchFace:(id)a0 fromViewController:(id)a1;

@end
