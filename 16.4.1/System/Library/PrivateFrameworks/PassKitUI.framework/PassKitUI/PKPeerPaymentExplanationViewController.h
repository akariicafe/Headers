@class NSString, PKPeerPaymentSetupFlowProvisionConfiguration, PKPeerPaymentSetupFlowController, UIViewController;

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    unsigned long long _operations;
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    UIViewController *_nextViewController;
    PKPeerPaymentSetupFlowProvisionConfiguration *_configuration;
    BOOL _hidesSetupLater;
}

@property (nonatomic) BOOL allowsManualEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_bodyText;
- (BOOL)shouldPushTerms;
- (void)_handleNextStep;
- (void)_addDifferentCard;
- (void)_presentDisplayableError:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisoningController:(id)a0 setupDelegate:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3 credential:(id)a4;

@end
