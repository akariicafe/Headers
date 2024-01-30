@class NSString, SSAuthenticateRequest, AMSBinaryPromise, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (nonatomic) BOOL _isObservingAccountStoreChange;
@property (retain, nonatomic) NSString *_accountIdentifier;
@property (retain, nonatomic) SSAuthenticateRequest *_authRequest;

+ (id)sharedInstance;
+ (id)userFullName;
+ (id)DSID;
+ (id)creditsString;
+ (id)_ssDSID;
+ (BOOL)allowsAccountModification;
+ (id)identifier;
+ (BOOL)userHasActiveAccount;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (BOOL)_useStoreServices;
+ (BOOL)_userHasActiveSSAccount;
+ (id)_userAccount;
+ (id)_userSSAccountName;
+ (id)_userSSFirstName;
+ (id)_userSSLastName;
+ (id)_userSSFullName;
+ (id)_ssCreditsString;
+ (void)_requestSSAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)_signInSSUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_signOutSSUserWithCompletionHandler:(id /* block */)a0;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (id)_userSSAccount;
+ (void)_performAuthenticationWithContext:(id)a0 completionHandler:(id /* block */)a1;
+ (id)userAccountName;
+ (id)userFirstName;
+ (id)userLastName;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;

- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;

@end
