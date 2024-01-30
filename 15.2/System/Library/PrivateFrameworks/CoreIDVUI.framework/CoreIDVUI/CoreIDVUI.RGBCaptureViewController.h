@interface CoreIDVUI.RGBCaptureViewController : CoreIDVUI.IdentityProofingViewController <UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ captureConfig;
    void /* unknown type, empty encoding */ inWatchModeOnly;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ primaryButtonText;
    void /* unknown type, empty encoding */ timeoutRestarts;
    void /* unknown type, empty encoding */ stitchDetectedRestarts;
    void /* unknown type, empty encoding */ faceOutOfBoundsRestarts;
    void /* unknown type, empty encoding */ faceTooSmallRestarts;
    void /* unknown type, empty encoding */ sentToBackgroundRestarts;
    void /* unknown type, empty encoding */ activityIndicator;
}

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)cancelBarButtonClicked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
