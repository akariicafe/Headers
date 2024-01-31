@class NSString;

@interface MessageAccountAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)isPushSupportedForAccount:(id)a0;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (id)credentialForAccount:(id)a0 client:(id)a1 error:(id *)a2;
- (id)_bundleIdentifiersAllowedToPromptForAccount:(id)a0;
- (void)_logWithAccount:(id)a0 level:(unsigned char)a1 reason:(id)a2 message:(id)a3;
- (BOOL)_clientIsEntitled:(id)a0;
- (id)_passwordPromptMessageWithAccount:(id)a0;
- (id)_passwordPromptTitleWithCredential:(id)a0;
- (void)_showPasswordPromptWithAccount:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)_verifyAccount:(id)a0 error:(id *)a1;

@end
