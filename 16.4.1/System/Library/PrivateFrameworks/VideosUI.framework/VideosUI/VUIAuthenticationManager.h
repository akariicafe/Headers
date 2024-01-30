@class UIImage, AAUIProfilePictureStore, AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;
@property (readonly, nonatomic) ACAccount *_localUserAccount;
@property (readonly, nonatomic) AAUIProfilePictureStore *_profilePictureStore;
@property (readonly, nonatomic) UIImage *_profileImage;

+ (id)sharedInstance;
+ (id)identifier;
+ (id)userFullName;
+ (id)creditsString;
+ (id)DSID;
+ (BOOL)allowsAccountModification;
+ (id)storefrontId;
+ (id)_profileImage;
+ (id)_userAccount;
+ (id)userAccountName;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;
+ (id)userFirstName;
+ (BOOL)userHasActiveAccount;
+ (id)userLastName;
+ (id)userProfileImage;

- (void)_accountStoreDidChange:(id)a0;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchProfileImage;

@end
