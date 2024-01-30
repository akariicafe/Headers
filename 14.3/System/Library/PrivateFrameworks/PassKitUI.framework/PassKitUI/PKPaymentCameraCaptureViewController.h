@class PKCameraCaptureInstructionView, NSString, NSArray, PKPaymentSetupBrowseProductsViewController, UIView, PKPaymentCardManualEntryViewController;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate;

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    NSArray *_outputObjects;
    PKPaymentCardManualEntryViewController *_manualEntryController;
    PKPaymentSetupBrowseProductsViewController *_browseCardsController;
    id<PKPaymentCameraCaptureViewControllerDelegate> _cameraCaptureDelegate;
    long long _context;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    unsigned long long _cameraCaptureStartTime;
}

@property (nonatomic) BOOL hideSetupLaterButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)pk_applyAppearance:(id)a0;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (void)_manualEntryButtonPressed:(id)a0;
- (void)_pushManualEntryViewController;
- (id)initWithCameraCaptureDelegate:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupLater:(id)a0;
- (void)viewDidLoad;

@end
