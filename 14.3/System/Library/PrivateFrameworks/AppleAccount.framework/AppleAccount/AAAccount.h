@class NSString, NSArray, NSDictionary, NSSet, ACAccount;

@interface AAAccount : NSObject {
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *fmipToken;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (nonatomic) BOOL primaryAccount;
@property (readonly, nonatomic) BOOL primaryEmailVerified;
@property (readonly, nonatomic) BOOL needsEmailConfiguration;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (readonly, nonatomic) BOOL serviceUnavailable;
@property (readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property (readonly, nonatomic) NSString *protocolVersion;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *provisionedDataclasses;
@property (readonly, nonatomic) NSSet *enabledDataclasses;
@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *accountFooterText;
@property (readonly, nonatomic) NSDictionary *accountFooterButton;
@property (readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *syncStoreIdentifier;
@property (nonatomic) BOOL needsToVerifyTerms;
@property (readonly, nonatomic) NSArray *supportedDataclasses;
@property (readonly, nonatomic) int accountServiceType;

+ (id)accountTypeString;

- (id)init;
- (void).cxx_destruct;
- (id)_mailChildAccount;
- (void)presentQuotaDepletionAlertForDataclass:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)a0 withHandler:(id /* block */)a1;
- (void)updateAccountWithProvisioningResponse:(id)a0;
- (BOOL)useCellularForDataclass:(id)a0;
- (void)setUseCellular:(BOOL)a0 forDataclass:(id)a1;
- (int)mobileMeAccountStatus;
- (void)notifyUserOfQuotaDepletion;
- (void)presentQuotaDepletionAlertForDataclass:(id)a0;
- (void)flushCachedTokens;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)a0;
- (void)saveTokensInKeychain;
- (void)savePasswordInKeychain;
- (void)saveFMIPTokenInKeychain;
- (void)removeTokensFromKeychain;
- (void)removePasswordFromKeychain;
- (void)flushCachedPassword;
- (void)updateAccountPropertiesWithHandler:(id /* block */)a0;
- (void)setupChildMailAccountAndEnable:(BOOL)a0 withEmail:(id)a1;
- (void)renewCredentialsForAppleIDWithHandler:(id /* block */)a0;
- (id)account;
- (id)_childAccounts;
- (void)setEnabled:(BOOL)a0 forDataclass:(id)a1;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (BOOL)isProvisionedForDataclass:(id)a0;
- (id)propertiesForDataclass:(id)a0;
- (BOOL)isEnabledForDataclass:(id)a0;
- (void)authenticateWithHandler:(id /* block */)a0;
- (id)initWithAccount:(id)a0;
- (id)initWithAccountIdentifier:(id)a0;
- (id)accountPropertyForKey:(id)a0;

@end
