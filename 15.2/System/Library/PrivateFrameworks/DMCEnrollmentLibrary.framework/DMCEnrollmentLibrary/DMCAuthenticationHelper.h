@interface DMCAuthenticationHelper : NSObject

+ (unsigned long long)enrollmentMethodFromAuthenticateString:(id)a0 outURL:(id *)a1;
+ (void)performExchangeMAIDForBearerTokenAtURL:(id)a0 rmAccountIdentifier:(id)a1 anchorCertificateRefs:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_createManagedAppleAccountInvalidatedError;
+ (id)_createGeneralServerError;
+ (id)_createMissingBearerTokenError;

@end
