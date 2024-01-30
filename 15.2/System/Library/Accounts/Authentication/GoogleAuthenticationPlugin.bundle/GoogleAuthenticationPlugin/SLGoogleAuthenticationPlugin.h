@class NSString;

@interface SLGoogleAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsAccountType:(id)a0;

- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 error:(id *)a3;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)renewalIDsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2;
- (void)_displayBadCredentialsAlertForAccount:(id)a0 clientName:(id)a1 reason:(id)a2 accountStore:(id)a3 resetAuthenticatedOnAlertFailure:(BOOL)a4 handler:(id /* block */)a5;
- (void)_refreshTokenForAccount:(id)a0 store:(id)a1 completion:(id /* block */)a2;
- (void)showUserAlertWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 textFieldTitle:(id)a4 keyboardType:(id)a5 withCompletionBlock:(id /* block */)a6;
- (void)_migrateLegacyToken:(id)a0 account:(id)a1 password:(id)a2 completion:(id /* block */)a3;
- (id)_titleForBadCredentialsAlertForAccount:(id)a0;
- (id)_otherButtonTitleForBadCredentialsAlert;
- (id)_cancelButtonTitleForBadCredentialsAlert;
- (id)_messageForBadCredentialsAlertWithReason:(id)a0 account:(id)a1;

@end
