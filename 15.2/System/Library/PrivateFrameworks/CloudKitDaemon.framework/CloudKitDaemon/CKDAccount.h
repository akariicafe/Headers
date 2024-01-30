@class NSURL, NSString, ACAccountStore, CKDBackingAccount, NSPersonNameComponents, NSObject, CKAccountOverrideInfo;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject

@property (readonly, nonatomic) CKDBackingAccount *backingAccount;
@property (nonatomic) BOOL isAnonymousAccount;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue;
@property (copy, nonatomic) NSString *lastFailedCloudKitAuthToken;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *formattedUsername;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) BOOL isCarryAccount;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)globalAuthTokenQueue;

- (id)initWithAccountID:(id)a0;
- (id)cloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (id)initAnonymousAccount;
- (id)initFakeAccountWithAccountOverrideInfo:(id)a0;
- (void)cloudKitAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (void)iCloudAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)_lockedRenewTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 tokenFetchBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)iCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)renewCloudKitAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (id)_lockediCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (BOOL)isDataclassEnabled:(id)a0;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 container:(id)a3 completionHandler:(id /* block */)a4;
- (id)initPrimaryAccount;
- (id)_init;
- (id)_lockedCloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (void)renewiCloudAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)_userCloudDBURLisInCarryPartition;

@end
