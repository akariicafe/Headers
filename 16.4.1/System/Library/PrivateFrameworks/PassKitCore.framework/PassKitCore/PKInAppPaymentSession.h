@interface PKInAppPaymentSession : PKPaymentSession

- (id)_appletForPaymentApplication:(id)a0;
- (id)_appletWithIdentifier:(id)a0;
- (id)authorizePaymentRequest:(id)a0 forPaymentApplication:(id)a1 usingNonce:(id)a2 withAuthenticationCredential:(id)a3;
- (id)authorizePaymentRequest:(id)a0 forPaymentApplication:(id)a1 usingNonce:(id)a2 withAuthenticationCredential:(id)a3 isFeatureNotSupportedError:(BOOL *)a4;
- (id)authorizePaymentRequest:(id)a0 forPaymentApplication:(id)a1 withAuthorizationParameters:(id)a2;
- (id)authorizeWithRequest:(id)a0 authorizationParameters:(id)a1;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;

@end
