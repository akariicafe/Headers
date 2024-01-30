@class ACAccount;

@interface CKDBackingFakeAccount : CKDBackingAccount

@property (retain, nonatomic) ACAccount *fakeCKAccount;

+ (id)fakeAccountWithEmail:(id)a0 password:(id)a1 propertyOverrides:(id)a2 overridesByDataclass:(id)a3;
+ (void)_setUpFakeAccountShenanigans;

- (id)identifier;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)ckAccount;
- (id)password;
- (BOOL)isDataclassEnabled:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFakeAccount;
- (void)renewAuthTokenWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (id)_initFakeAccountWithEmail:(id)a0 password:(id)a1 propertyOverrides:(id)a2 overridesByDataclass:(id)a3;
- (id)_initFakeAccountWithEmail:(id)a0 password:(id)a1;
- (void)_checkAndLogIfAccountError;
- (void)_setOverridesOnVettingContext:(id)a0;

@end
