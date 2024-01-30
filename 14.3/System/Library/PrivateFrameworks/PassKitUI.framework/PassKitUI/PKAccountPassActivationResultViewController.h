@class UINotificationFeedbackGenerator, NSString, CLInUseAssertion, CLLocationManager, PKAccountFlowController, UIViewController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKAccountPassActivationResultViewController : PKExplanationViewController <PKAccountFlowControllerDelegate> {
    PKAccountFlowController *_accountController;
    id<PKPaymentSetupViewControllerDelegate> _delegate;
    unsigned long long _featureIdentifier;
    long long _setupContext;
    UIViewController *_nextViewController;
    CLInUseAssertion *_inUseAssertion;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
    CLLocationManager *_locationManager;
}

@property (nonatomic) BOOL didAddToAmp;
@property (nonatomic) BOOL didMakeAccountPassDefault;
@property (nonatomic) BOOL showingLoadingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)_updateUI;
- (void)_terminateSetupFlow;
- (void)viewWillAppear:(BOOL)a0;
- (void)_showActivationSpinner:(BOOL)a0;
- (void)_presentViewController:(id)a0;
- (void)_updateForLoading;
- (void)_updateForMadeDefault;
- (void)_updateForSetupLater;
- (id)_localizedStringKeyForPerformedOperationsAndMadeDefault:(BOOL)a0;
- (id)_setupLaterBodyString;
- (id)initWithAccountFlowController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (void)accountFlowController:(id)a0 requestsPresentationOfDisplayableError:(id)a1;
- (void)accountFlowController:(id)a0 requestsPresentationOfViewController:(id)a1;
- (void)_handleNextStep;
- (void)_presentDisplayableError:(id)a0;
- (BOOL)_willPerformProvisioningActions;
- (void)viewDidLoad;

@end
