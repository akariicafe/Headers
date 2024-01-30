@class PKInAppPaymentService, PKAccountService;

@interface PKVirtualCardManager : NSObject {
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}

- (void).cxx_destruct;
- (id)init;
- (void)queryKeychainForVirtualCard:(id /* block */)a0;
- (void)activeVirtualCardsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)credentialsForVirtualCard:(id)a0 authorization:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)urlToPassDetailsForVirtualCard:(id)a0;
- (void)promptDetailsForVirtualCard:(id)a0 completion:(id /* block */)a1;
- (void)dismissDetailsForVirtualCard:(id)a0 completion:(id /* block */)a1;

@end
