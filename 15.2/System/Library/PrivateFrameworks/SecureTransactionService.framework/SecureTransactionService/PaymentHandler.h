@class NSString, NFLoyaltyAndPaymentSession;

@interface PaymentHandler : STSTransactionHandler <NFLoyaltyAndPaymentSessionDelegate> {
    NFLoyaltyAndPaymentSession *_nfSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loyaltyAndPaymentSession:(id)a0 didEndTransaction:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didPerformValueAddedServiceTransactions:(id)a1;
- (void).cxx_destruct;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)stopTransaction;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didDetectField:(BOOL)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didSelectApplet:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didExpireTransactionForApplet:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didStartTransaction:(id)a1;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didSelectValueAddedService:(BOOL)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didFelicaStateChange:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didExpressModeStateChange:(unsigned int)a1 withObject:(id)a2;
- (void)loyaltyAndPaymentSession:(id)a0 didFailDeferredAuthorization:(BOOL)a1;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)a0 result:(id)a1;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (id)activateWithDelegate:(id)a0 handoffToken:(id)a1;
- (unsigned char)supportedCredentialType;

@end
