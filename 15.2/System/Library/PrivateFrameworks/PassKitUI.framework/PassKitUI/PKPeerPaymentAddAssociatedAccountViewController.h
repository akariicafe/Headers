@class NSString, PKPeerPaymentSetupFlowController, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration, PKWatchDeviceImageOverlayView, PKPeerPaymentWebService, PKPeerPaymentAccount, PKFamilyMember, PKFamilyMemberCollection;

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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (id)_imageForWatchView;
- (void)_showSpinner:(BOOL)a0;
- (void)_presentDisplayableError:(id)a0;
- (BOOL)shouldPushTerms;
- (id)initWithFamilyMember:(id)a0 familyCollection:(id)a1 webService:(id)a2 passLibraryDataProvider:(id)a3 delegate:(id)a4 context:(long long)a5 setupType:(long long)a6;
- (void)_terminateAddAssociatedAccountFlow;

@end
