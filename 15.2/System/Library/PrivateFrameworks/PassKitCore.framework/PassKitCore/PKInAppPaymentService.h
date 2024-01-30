@class PKXPCService;

@interface PKInAppPaymentService : NSObject {
    PKXPCService *_remoteService;
}

- (void)registerPaymentListenerEndpoint:(id)a0 forHostIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)a0 forHostIdentifier:(id)a1 hostSceneIdentifier:(id)a2 orientation:(id)a3 completion:(id /* block */)a4;
- (BOOL)secureElementStatus:(unsigned long long *)a0;
- (void)cardsAvailableForAMPWithCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)cardDataForMerchantIdentifier:(id)a0 countryCode:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)paymentHardwareStatusWithType:(unsigned long long)a0;
- (void)secureElementStatusWithCompletion:(id /* block */)a0;
- (void)paymentHardwareStatusWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)a0 merchantSession:(id)a1 completion:(id /* block */)a2;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)a0 completion:(id /* block */)a1;
- (long long)cardsAvailableForAMPWithCountryCode:(id)a0;
- (id)init;
- (void)merchantStatusCheck:(id)a0 merchantDomain:(id)a1 sourceApplicationSecondaryIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
