@class NSString, NSPersonNameComponents, ACAccount, NSURL;

@interface CKDBackingAccount : NSObject

@property (readonly, nonatomic) ACAccount *appleAccount;
@property (readonly, nonatomic) ACAccount *ckAccount;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL isPrimaryAccount;
@property (readonly, nonatomic) BOOL isAccountSuspended;
@property (readonly, nonatomic) BOOL canSuspendedAccountRenewCredentials;
@property (readonly, nonatomic) long long accountType;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;

+ (id)accountWithIdentifier:(id)a0;
+ (id)primaryAccount;
+ (id)accountWithAltDSID:(id)a0;
+ (id)credentialRenewalDatesBySuspendedAccountID;
+ (void)deviceCountForAccount:(id)a0 ignoreCache:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)deviceCountQueue;
+ (id)explicitCredentialsAccountWithEmail:(id)a0 password:(id)a1 recoveryKey:(id)a2 propertyOverrides:(id)a3 overridesByDataclass:(id)a4;
+ (void)fetchDeviceCountForAccount:(id)a0 completionHandler:(id /* block */)a1;
+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)initWithAppleAccount:(id)a0;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDataclassEnabled:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)noteSuspendedAccountRenewalDate;
- (id)_accountCredentialForAccount:(id)a0 withError:(id *)a1;
- (void)_setOverridesOnVettingContext:(id)a0;
- (id)accountPropertiesForDataclass:(id)a0;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (id)privateCodeServiceURLPreferringGateway:(BOOL)a0;
- (void)renewAuthTokenWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)urlForDataclass:(id)a0;
- (id)urlForDataclass:(id)a0 preferringGateway:(BOOL)a1;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;

@end
