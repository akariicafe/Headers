@class NSString, NSPersonNameComponents, ACAccountStore, ACAccount, NSURL;

@interface CKDBackingAccount : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ACAccount *ckAccount;
@property (retain, nonatomic) ACAccount *appleAccount;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;

+ (id)primaryAccountInStore:(id)a0;
+ (id)accountWithIdentifier:(id)a0 inStore:(id)a1;
+ (id)fakeAccountWithEmail:(id)a0 password:(id)a1 inStore:(id)a2 propertyOverrides:(id)a3 overridesByDataclass:(id)a4;
+ (void)deviceCountForAccount:(id)a0 ignoreCache:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)accountQueue;
+ (BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)a0 inStore:(id)a1;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)a0 inStore:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDataclassEnabled:(id)a0;
- (id)accountPropertiesForDataclass:(id)a0;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canRenew;
- (void)renewAuthTokenInStore:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;
- (id)_initWithAccountStore:(id)a0;
- (void)_setOverridesOnVettingContext:(id)a0;
- (id)_accountCredentialForAccount:(id)a0 withError:(id *)a1;
- (id)urlForDataclass:(id)a0 preferringGateway:(BOOL)a1;
- (id)urlForDataclass:(id)a0;
- (id)privateCodeServiceURLPreferringGateway:(BOOL)a0;

@end
