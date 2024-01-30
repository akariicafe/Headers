@interface CoreIDVUI.IDScanViewController : CoreIDVUI.IdentityProofingViewController {
    void /* unknown type, empty encoding */ autoCapturePath;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ docInfo;
    void /* unknown type, empty encoding */ scanSide;
    void /* unknown type, empty encoding */ cameraReader;
    void /* unknown type, empty encoding */ docScanConfig;
    void /* unknown type, empty encoding */ lastSpokenAlertMessage;
    void /* unknown type, empty encoding */ idScanResult;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ analyticsReporter;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
