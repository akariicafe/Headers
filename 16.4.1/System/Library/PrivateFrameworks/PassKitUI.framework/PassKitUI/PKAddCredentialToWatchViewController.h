@class NSString, PKSubcredentialPairingFlowControllerContext, PKHeroCardWatchExplainationHeaderView, PKPaymentAuthorizationCoordinator, PKAppletSubcredentialSharingSession, LAContext;
@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;

@interface PKAddCredentialToWatchViewController : PKExplanationViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKExplanationViewControllerDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable> {
    PKAppletSubcredentialSharingSession *_sharingSession;
    id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
    BOOL _isAdvancing;
    PKHeroCardWatchExplainationHeaderView *_heroCardView;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    id /* block */ _authorizationRequestCompletion;
    LAContext *_LAContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (void)resetState;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeContextWithHandler:(id /* block */)a1;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithError:(id)a1 inState:(long long)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)a0;
- (void)subcredentialProvisioningConfiguration:(id)a0 requestUserAuthWithCompletion:(id /* block */)a1;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithPass:(id)a1;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (void)advanceToNextState;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)invalidateUserAuth;
- (void)presentPaymentSheetForSharingRequest:(id)a0;
- (id)sharingSessionWithDelegate:(id)a0;
- (void)showActivityIndicator:(BOOL)a0;
- (void)showSuccessCheckmark:(BOOL)a0;
- (void)startProvisioning;

@end
