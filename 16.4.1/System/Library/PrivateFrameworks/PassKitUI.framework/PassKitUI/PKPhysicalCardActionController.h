@class NSError, NSString, PKAccountService, PKPaymentAuthorizationCoordinator, PKAccountUser, PKPaymentDevice, PKAccount, PKAccountWebServicePhysicalCardActionRequest;
@protocol PKPhysicalCardActionControllerDelegate;

@interface PKPhysicalCardActionController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKAccountService *_accountService;
    id<PKPhysicalCardActionControllerDelegate> _delegate;
    PKPaymentDevice *_paymentDevice;
    PKAccountWebServicePhysicalCardActionRequest *_lastActionRequest;
    BOOL _lastActionSuccess;
    NSError *_lastActionError;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
}

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)a0 completion:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)a0;
- (void)replacePhysicalCard:(id)a0 withReason:(unsigned long long)a1;
- (BOOL)_canPerformActionWithState:(long long)a0;
- (id)_generatePaymentRequestWithSignatureRequest:(id)a0;
- (void)_performAction:(id)a0 onPhysicalCard:(id)a1;
- (void)_presentApplePayTrustWithPaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)_transitionToState:(long long)a0 withError:(id)a1;
- (void)activatePhysicalCard:(id)a0 withActivationCode:(id)a1;
- (void)activatePhysicalCardWithoutActivationCode:(id)a0;
- (void)cancelPhysicalCard:(id)a0;
- (void)disablePhysicalCard:(id)a0;
- (void)enablePhysicalCard:(id)a0;
- (id)initWithAccountService:(id)a0 account:(id)a1 accountUser:(id)a2 delegate:(id)a3;

@end
