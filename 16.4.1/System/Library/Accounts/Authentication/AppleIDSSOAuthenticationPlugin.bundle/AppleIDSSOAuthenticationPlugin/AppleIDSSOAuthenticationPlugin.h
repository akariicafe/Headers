@class NSString, AKAppleIDAuthenticationController;

@interface AppleIDSSOAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin> {
    AKAppleIDAuthenticationController *_authController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)_standardAuthContextForAccount:(id)a0 store:(id)a1 options:(id)a2;
- (void)_attemptInteractiveCredentialRenewalForAccount:(id)a0 store:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 error:(id *)a3;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (id)_silentAuthContextForAccount:(id)a0 rawPassword:(id)a1 store:(id)a2 options:(id)a3;
- (void)_attemptSilentCredentialRenewalForAccount:(id)a0 store:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)_authController;
- (void).cxx_destruct;

@end
