@class NSString, PKPeerPaymentSetupFlowHeroView, PKPeerPaymentSetupFlowController, CLInUseAssertion;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    PKPeerPaymentSetupFlowHeroView *_heroView;
    unsigned long long _state;
    unsigned long long _operations;
    BOOL _shouldShowAddDebitCardViewController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    CLInUseAssertion *_inUseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldPushTerms;
- (void)_handleNextStep;
- (void)_beginSetup;
- (id)_bodyStringForState;
- (void)_handleActivatedState;
- (void)_invalidateCLInUseAssertion;
- (void)_presentActivationFailedErrorAlert;
- (void)_presentDisplayableError:(id)a0;
- (BOOL)_shouldShowAddDebitCardViewController;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateSetupFlow;
- (id)_titleStringForState;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;

@end
