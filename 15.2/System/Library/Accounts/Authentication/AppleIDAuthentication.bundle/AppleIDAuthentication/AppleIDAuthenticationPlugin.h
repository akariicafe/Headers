@class NSString, NSMutableSet, AAFollowUpController, AKAppleIDAuthenticationController;

@interface AppleIDAuthenticationPlugin : NSObject <AKAppleIDAuthenticationDelegate, ACDAccountAuthenticationPlugin> {
    NSMutableSet *_accountsAwaitingRemotePasswordEntry;
    AKAppleIDAuthenticationController *_authController;
    AAFollowUpController *_followUpController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_grayModeWhitelist;

- (id)_authController;
- (void)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3 completion:(id /* block */)a4;
- (void)_handleRenewFailure:(id)a0 forAccount:(id)a1 accountStore:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (id)_parametersForIDSAlertFromLoginResponse:(id)a0;
- (void)_handleDelegatesResponseForAccount:(id)a0 store:(id)a1 response:(id)a2 error:(id)a3 handler:(id /* block */)a4;
- (void)_handleAuthenticationResults:(id)a0 error:(id)a1 forAccount:(id)a2 inStore:(id)a3 resetAuthenticatedOnAlertFailure:(BOOL)a4 completion:(id /* block */)a5;
- (void)_silentlyAuthenticateAppleID:(id)a0 altDSID:(id)a1 companionDevice:(id)a2 services:(id)a3 completion:(id /* block */)a4;
- (void)_migrateFMIPTokenIfNeededForAccount:(id)a0 credential:(id)a1;
- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_migrateAppleIDTokensIfNeededForAccount:(id)a0 credential:(id *)a1 store:(id)a2;
- (void)_isAccountReallyInGreyMode:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (void)_migrateiCloudTokenIfNeededForAccount:(id)a0 credential:(id)a1;
- (void)_invokeDelegatesWithAuthenticationResponse:(id)a0 password:(id)a1 store:(id)a2 account:(id)a3 completion:(id /* block */)a4;
- (id)_findAndRemoveOldFMIPTokenForAccount:(id)a0;
- (id)_frontmostApplicationId;
- (void)_tryPasswordLoginWithAccount:(id)a0 store:(id)a1 services:(id)a2 completion:(id /* block */)a3;
- (BOOL)_clientHasEntitlement:(id)a0;
- (id)_findAndRemoveOldiCloudTokenForAccount:(id)a0;
- (id)_accountTypeIDsThatReplacedAppleIDAccountType;
- (BOOL)_isAccountInGrayMode:(id)a0;
- (id)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 error:(id *)a3;
- (void)_loginWithAccount:(id)a0 store:(id)a1 companionDevice:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (id)_userInfoForRenewCredentialsFollowUpWithAccountStore:(id)a0 proxiedDevice:(id)a1;
- (void)_convertPasswordToPETForAppleID:(id)a0 altDSID:(id)a1 password:(id)a2 services:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_beginPETBasedLoginWithAccount:(id)a0 PET:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (void)_authenticateAccount:(id)a0 inStore:(id)a1 options:(id)a2 errorMessage:(id)a3 completion:(id /* block */)a4;
- (id)_parametersForProxiedAuthentication;
- (id)init;
- (void)_fetchTokenForAccount:(id)a0 accountStore:(id)a1 withHandler:(id /* block */)a2;
- (id)_loginDelegatesParameters;
- (void)discoverPropertiesForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)isPushSupportedForAccount:(id)a0;
- (void)_showUserAlertWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 textFieldTitle:(id)a4 withCompletionBlock:(id /* block */)a5;
- (void)_getPasswordFromCompanionForAccount:(id)a0 store:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_updateDSID:(id)a0 withRawPassword:(id)a1 suggestedAccount:(id)a2 store:(id)a3 completion:(id /* block */)a4;
- (void)_renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 errorMessage:(id)a3 completion:(id /* block */)a4;

@end
