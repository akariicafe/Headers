@class PKXPCService;

@interface PKInAppPaymentService : NSObject {
    PKXPCService *_remoteService;
}

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)merchantStatusCheck:(id)a0 merchantDomain:(id)a1 sourceApplicationSecondaryIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)secureElementStatus:(unsigned long long *)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)registerPaymentListenerEndpoint:(id)a0 forHostIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)secureElementStatusWithCompletion:(id /* block */)a0;
- (void)paymentHardwareStatusWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)a0 merchantSession:(id)a1 completion:(id /* block */)a2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)a0 forHostIdentifier:(id)a1 orientation:(id)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (id)paymentHardwareStatusWithType:(unsigned long long)a0;
- (long long)cardsAvailableForAMPWithCountryCode:(id)a0;
- (void)cardsAvailableForAMPWithCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cardDataForMerchantIdentifier:(id)a0 countryCode:(id)a1 completion:(id /* block */)a2;

@end
