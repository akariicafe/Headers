@class NSString, NSTimer, PKPaymentDocumentSubmissionController, UIView, PKCameraCaptureInstructionView, UIBarButtonItem;

@interface PKPaymentDocumentSubmissionIDCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol> {
    PKPaymentDocumentSubmissionController *_captureController;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    BOOL _reachedTimeout;
    NSTimer *_timerTryAgain;
    UIBarButtonItem *_buttonCancel;
    long long _context;
    unsigned long long _featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)updateUIWithState:(long long)a0;
- (void)dealloc;
- (void)captureController:(id)a0 showLoading:(BOOL)a1;
- (void)captureController:(id)a0 didChangeStateTo:(long long)a1;
- (id)initWithController:(id)a0 context:(long long)a1 featureIdentifier:(unsigned long long)a2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)viewDidLoad;

@end
