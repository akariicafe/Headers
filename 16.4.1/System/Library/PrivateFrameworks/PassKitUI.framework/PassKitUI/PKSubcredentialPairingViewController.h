@class NSString, PKAppletSubcredentialPairingSession, PKSubcredentialPairingFlowControllerContext, PKCredentialProvisioningView, PKIdleTimerAssertion;
@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;

@interface PKSubcredentialPairingViewController : UIViewController <PKSubcredentialLocalDevicePairingFlowControllerOperation> {
    PKAppletSubcredentialPairingSession *_pairingSession;
    id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
    PKCredentialProvisioningView *_provisioningView;
    BOOL _isCancelling;
    BOOL _isAdvancing;
    BOOL _outstandingAlert;
    PKIdleTimerAssertion *_idleTimerAssertion;
}

@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)setIdleTimerDisabled:(BOOL)a0;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithError:(id)a1 inState:(long long)a2;
- (void)subcredentialProvisioningController:(id)a0 didEnterState:(long long)a1;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithPass:(id)a1;
- (void)subcredentialProvisioningController:(id)a0 shouldFailAfterError:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (void)advanceToNextState;
- (void)handleCancelButton;
- (void)hostApplicationDidEnterBackground;
- (id)pairingSessionWithDelegate:(id)a0;
- (void)startProvisioning;
- (void)updateUIForState:(long long)a0;

@end
