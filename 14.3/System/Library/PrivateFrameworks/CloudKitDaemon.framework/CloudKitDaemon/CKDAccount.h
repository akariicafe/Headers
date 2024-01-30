@class CKAccountOverrideInfo, NSString, NSURL, CKDBackingAccount, ACAccountStore, NSObject, NSPersonNameComponents;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject <CKDAccountInfoProvider>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) CKDBackingAccount *backingAccount;
@property (nonatomic) BOOL isAnonymousAccount;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue;
@property (copy, nonatomic) NSString *lastFailedCloudKitAuthToken;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *formattedUsername;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (nonatomic) BOOL isUnitTestingAccount;
@property (nonatomic) BOOL accountWantsPushRegistration;
@property (nonatomic) BOOL accountWantsFlowControl;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) BOOL isCarryAccount;
@property (readonly, nonatomic) BOOL isiCloudDevEnvironmentAccount;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalAuthTokenQueue;

- (id)dsid;
- (id)initPrimaryAccount;
- (void)cloudKitAuthTokenWithAccessProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)renewCloudKitAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 accessProvider:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (void)_lockedRenewTokenWithReason:(id)a0 shouldForce:(BOOL)a1 accountAccessProvider:(id)a2 tokenFetchBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)iCloudAuthTokenWithAccessProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)_lockedCloudKitAuthTokenWithAccessProvider:(id)a0 error:(id *)a1;
- (void)renewiCloudAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 accessProvider:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (id)cloudKitAuthTokenWithAccessProvider:(id)a0 error:(id *)a1;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (id)_lockediCloudAuthTokenWithAccessProvider:(id)a0 error:(id *)a1;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (id)_init;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 accountAccessProvider:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithAccountID:(id)a0;
- (id)initAnonymousAccount;
- (id)sharingURLHostname;
- (BOOL)_userCloudDBURLisInCarryPartition;
- (id)iCloudAuthTokenWithAccessProvider:(id)a0 error:(id *)a1;
- (BOOL)isDataclassEnabled:(id)a0;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(id /* block */)a0;
- (id)initFakeAccountWithAccountOverrideInfo:(id)a0;

@end
