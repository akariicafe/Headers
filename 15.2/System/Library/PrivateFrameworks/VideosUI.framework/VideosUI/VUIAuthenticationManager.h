@class AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;

+ (id)sharedInstance;
+ (id)DSID;
+ (id)identifier;
+ (id)userFullName;
+ (BOOL)allowsAccountModification;
+ (id)creditsString;
+ (id)storefrontId;
+ (BOOL)userHasActiveAccount;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_userAccount;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (id)userAccountName;
+ (id)userFirstName;
+ (id)userLastName;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;

- (void)_accountStoreDidChange:(id)a0;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
