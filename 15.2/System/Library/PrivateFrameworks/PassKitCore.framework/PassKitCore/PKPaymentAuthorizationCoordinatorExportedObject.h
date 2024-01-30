@class PKPaymentAuthorizationCoordinator, NSString;
@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationCoordinatorDelegate;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
}

@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;
@property (weak, nonatomic) PKPaymentAuthorizationCoordinator *controller;
@property (retain, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)authorizationWillStart;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizeDisbursement:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidPresent;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)didEncounterAuthorizationEvent:(unsigned long long)a0;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)a0;
- (void)handleConnectionDidOpenWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)initWithController:(id)a0;

@end
