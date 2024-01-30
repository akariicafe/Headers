@class PKFamilyMember, NSString, PKPeerPaymentWebService, PKPeerPaymentSetupFlowController, PKPeerPaymentAccount, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration, PKWatchDeviceImageOverlayView;

@interface PKPeerPaymentAddAssociatedAccountViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDataSource> {
    unsigned long long _operations;
    PKFamilyMember *_familyMember;
    PKFamilyMember *_viewer;
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

- (BOOL)shouldPushTerms;
- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (id)_imageForWatchView;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateAddAssociatedAccountFlow;
- (id)initWithFamilyMember:(id)a0 viewer:(id)a1 webService:(id)a2 passLibraryDataProvider:(id)a3 delegate:(id)a4 context:(long long)a5;
- (void)viewDidAppear:(BOOL)a0;
- (void)_presentDisplayableError:(id)a0;
- (void)viewDidLoad;

@end
