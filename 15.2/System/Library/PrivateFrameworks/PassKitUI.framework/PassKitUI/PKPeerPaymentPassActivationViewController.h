@class NSString, PKPeerPaymentSetupFlowHeroView, PKPeerPaymentSetupFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    PKPeerPaymentSetupFlowHeroView *_heroView;
    unsigned long long _state;
    unsigned long long _operations;
    BOOL _shouldShowAddDebitCardViewController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_terminateSetupFlow;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)_beginSetup;
- (void)_handleActivatedState;
- (void)_handleNextStep;
- (void)_presentDisplayableError:(id)a0;
- (id)_titleStringForState;
- (id)_bodyStringForState;
- (BOOL)_shouldShowAddDebitCardViewController;
- (void)_presentActivationFailedErrorAlert;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;
- (BOOL)shouldPushTerms;

@end
