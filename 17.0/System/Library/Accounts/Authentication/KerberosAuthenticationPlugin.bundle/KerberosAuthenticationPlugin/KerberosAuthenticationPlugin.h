@class NSString;

@interface KerberosAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (id)credentialForAccount:(id)a0 client:(id)a1 error:(id *)a2;
- (void)_authenticateAccount:(id)a0 password:(id)a1 certificate:(id)a2 client:(id)a3 completion:(id /* block */)a4;
- (void)_promptForPasswordAndAuthenticateAccount:(id)a0 authAttemptsRemaining:(unsigned int)a1 client:(id)a2 completion:(id /* block */)a3;
- (void)_presentAuthenticationDialogForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_useCertificate:(id)a0 toAuthenticateAccount:(id)a1 client:(id)a2 withCompletion:(id /* block */)a3;

@end
