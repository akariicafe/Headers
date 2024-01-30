@class NSString, NSMutableDictionary;

@interface ESAccountAuthenticator : NSObject <ACDAccountAuthenticationPlugin, DAValidityCheckConsumer> {
    NSMutableDictionary *_accountIDToVerificationHandler;
    NSMutableDictionary *_accountIDToAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 error:(id *)a3;
- (BOOL)isPushSupportedForAccount:(id)a0;
- (id)init;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)account:(id)a0 isValid:(BOOL)a1 validationError:(id)a2;
- (BOOL)_isExchangeBasicAccount:(id)a0;
- (void)retrieveJWKSDataFromURI:(id)a0 withCompletion:(id /* block */)a1;
- (void)retrieveOpenIDMetadataFromURI:(id)a0 withCompletion:(id /* block */)a1;
- (id)appIdsForPromptingForDAAccount:(id)a0;
- (void)_displayBadCredentialsAlertForAccount:(id)a0 clientName:(id)a1 reason:(id)a2 accountStore:(id)a3 resetAuthenticatedOnAlertFailure:(BOOL)a4 handler:(id /* block */)a5;
- (BOOL)_isExchangeOAuthAccount:(id)a0;
- (void)_handlePasswordNotification:(struct __CFUserNotification { } *)a0 response:(unsigned long long)a1 callback:(id /* block */)a2 account:(id)a3 accountStore:(id)a4 resetAuthenticatedOnAlertFailure:(BOOL)a5;
- (BOOL)_isTransientNetworkError:(id)a0;
- (void)_refreshTokenForAccount:(id)a0 store:(id)a1 completion:(id /* block */)a2;
- (void)_renewCredentialsForAccount:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldUpgradeAccountToOAuth2:(id)a0 withCredential:(id)a1;
- (id)backgroundThread;
- (void)invokeAndReleaseBlock:(id /* block */)a0;
- (void)parkBackgroundThread:(id)a0;
- (void)showUserAlertWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 textFieldTitle:(id)a4 keyboardType:(id)a5 withCompletionBlock:(id /* block */)a6;
- (void)_addPropertiesToAccount:(id)a0 oauthURI:(id)a1 tokenRequestURI:(id)a2 jwksURI:(id)a3 issuer:(id)a4 oauthVersion:(id)a5 jwksData:(id)a6 jwksDataCacheDate:(id)a7;
- (BOOL)_jwksDataCacheValidForAccount:(id)a0;
- (unsigned long long)_accountOAuthVersion:(id)a0;
- (id)_currentDateString;
- (void)_displayMigrationPendingAlertForAccount:(id)a0 accountStore:(id)a1 handler:(id /* block */)a2;
- (void)retrieveAuthURIWithHost:(id)a0 withCompletion:(id /* block */)a1;

@end
