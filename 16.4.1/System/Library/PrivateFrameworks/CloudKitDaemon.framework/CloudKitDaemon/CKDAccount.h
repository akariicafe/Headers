@class ACAccountStore, NSString, CKDBackingAccount, NSPersonNameComponents, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject

@property (readonly, nonatomic) CKDBackingAccount *backingAccount;
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
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) BOOL isPrimaryAccount;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) long long accountType;
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
@property (readonly, nonatomic) BOOL isValidTestAccount;

+ (id)globalAuthTokenQueue;

- (id)cloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(id /* block */)a0;
- (id)initWithAltDSID:(id)a0;
- (id)initWithAccountID:(id)a0;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (id)_init;
- (id)initExplicitCredentialsAccountWithAccountOverrideInfo:(id)a0;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (BOOL)_userCloudDBURLisInCarryPartition;
- (id)initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (void)_lockedRenewTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 tokenFetchBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)cloudKitAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (id)_lockediCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (id)initPrimaryAccount;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 container:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)isDataclassEnabled:(id)a0;
- (void)iCloudAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (void)renewCloudKitAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (id)description;
- (id)initAnonymousAccount;
- (void)renewiCloudAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (id)_lockedCloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)iCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;

@end
