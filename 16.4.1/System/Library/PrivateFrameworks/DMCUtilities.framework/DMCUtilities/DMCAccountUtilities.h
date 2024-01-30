@class DMCHangDetectionQueue;

@interface DMCAccountUtilities : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *signInQueue;

+ (id)managedAppleIDNameWithPersonaID:(id)a0;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)a0;
+ (id)appStoreAccountIdentifierForPersona:(id)a0;
+ (id)_appleAccountWithPersonaID:(id)a0;

- (void).cxx_destruct;
- (BOOL)_signIniCloudAccountWithAuthenticationResult:(id)a0 personaID:(id)a1 baseViewController:(id)a2 outError:(id *)a3;
- (BOOL)_signIniTunesAccountWithAuthenticationResult:(id)a0 personaID:(id)a1 canMakeAccountActive:(BOOL)a2 baseViewController:(id)a3 outError:(id *)a4;
- (void)signInAccountsWithTypes:(id)a0 authenticationResult:(id)a1 personaID:(id)a2 canMakeAccountActive:(BOOL)a3 baseViewController:(id)a4 completionHandler:(id /* block */)a5;
- (void)signOutAllPrimaryAccounts;

@end
