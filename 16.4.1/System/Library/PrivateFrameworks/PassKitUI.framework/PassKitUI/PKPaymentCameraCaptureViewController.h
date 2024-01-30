@class NSString, NSArray, PKPaymentProvisioningController, UIView, PKCameraCaptureInstructionView, PKPaymentCardManualEntryViewController;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate;

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    NSArray *_outputObjects;
    PKPaymentCardManualEntryViewController *_manualEntryController;
    id<PKPaymentCameraCaptureViewControllerDelegate> _cameraCaptureDelegate;
    long long _context;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    unsigned long long _cameraCaptureStartTime;
    PKPaymentProvisioningController *_provisioningController;
}

@property (nonatomic) BOOL hideSetupLaterButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_manualEntryButtonPressed:(id)a0;
- (void)_pushManualEntryViewController;
- (void)_setupLater:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (id)initWithCameraCaptureDelegate:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (void)pk_applyAppearance:(id)a0;

@end
