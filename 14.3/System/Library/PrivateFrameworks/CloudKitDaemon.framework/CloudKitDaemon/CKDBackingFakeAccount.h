@class ACAccount;

@interface CKDBackingFakeAccount : CKDBackingAccount

@property (retain, nonatomic) ACAccount *fakeCKAccount;

+ (id)fakeAccountWithEmail:(id)a0 password:(id)a1 inStore:(id)a2 propertyOverrides:(id)a3 overridesByDataclass:(id)a4;
+ (void)_setUpFakeAccountShenanigans;

- (BOOL)isFakeAccount;
- (void).cxx_destruct;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDataclassEnabled:(id)a0;
- (id)password;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (void)renewAuthTokenInStore:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (id)ckAccount;
- (id)_initFakeAccountWithEmail:(id)a0 password:(id)a1 inStore:(id)a2 propertyOverrides:(id)a3 overridesByDataclass:(id)a4;
- (id)_initFakeAccountWithEmail:(id)a0 password:(id)a1 inStore:(id)a2;
- (void)_checkAndLogIfAccountError;
- (void)_setOverridesOnVettingContext:(id)a0;

@end
