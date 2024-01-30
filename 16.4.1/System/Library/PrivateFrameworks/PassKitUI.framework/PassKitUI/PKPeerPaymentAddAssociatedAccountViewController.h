@class NSString, PKPeerPaymentSetupFlowController, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration, PKWatchDeviceImageOverlayView, PKPeerPaymentWebService, PKPeerPaymentAccount, CLInUseAssertion, PKFamilyMember, PKFamilyMemberCollection;

@interface PKPeerPaymentAddAssociatedAccountViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDataSource> {
    unsigned long long _operations;
    long long _setupType;
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentWebService *_webService;
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration *_configuration;
    PKWatchDeviceImageOverlayView *_watchDeviceImageView;
    CLInUseAssertion *_inUseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldPushTerms;
- (id)_imageForWatchView;
- (void)_invalidateCLInUseAssertion;
- (void)_presentDisplayableError:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateAddAssociatedAccountFlow;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithFamilyMember:(id)a0 familyCollection:(id)a1 webService:(id)a2 passLibraryDataProvider:(id)a3 delegate:(id)a4 context:(long long)a5 setupType:(long long)a6;

@end
