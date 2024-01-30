@class NSString, CLInUseAssertion, PKAccountFlowController, PKAccountPostProvisioningContent;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKAccountPassMakeDefaultViewContoller : PKExplanationViewController <PKAccountFlowControllerDelegate, PKViewControllerPreflightable> {
    PKAccountFlowController *_accountController;
    id<PKPaymentSetupViewControllerDelegate> _delegate;
    unsigned long long _featureIdentifier;
    PKAccountPostProvisioningContent *_makeDefaultPostProvisioningContent;
    CLInUseAssertion *_inUseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_presentViewController:(id)a0;
- (void)dealloc;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_terminateSetupFlow;
- (void)_presentDisplayableError:(id)a0;
- (void)_reportEventForPassIfNecessary:(id)a0;
- (id)initWithAccountFlowController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (void)accountFlowController:(id)a0 requestsPresentationOfDisplayableError:(id)a1;
- (void)accountFlowController:(id)a0 requestsPresentationOfViewController:(id)a1;
- (BOOL)_willPerformProvisioningActions;

@end
