@class SOKeychainHelper, NSMutableDictionary, NSMapTable, SOKerberosHelper;

@interface SOKerberosExtensionProcess : NSObject

@property (retain, nonatomic) NSMutableDictionary *kerberosByRealm;
@property (retain, nonatomic) NSMapTable *requestContextMapping;
@property (retain) SOKerberosHelper *kerberosHelper;
@property (retain, nonatomic) SOKeychainHelper *keychainHelper;

- (id)init;
- (void).cxx_destruct;
- (void)handleMigration;
- (void)cancelAuthorizationWithRequest:(id)a0;
- (void)beginAuthorizationWithRequest:(id)a0;
- (void)attemptKerberosWithContext:(id)a0 andDelegate:(id)a1;
- (BOOL)checkSourceAppACLWithContext:(id)a0;
- (void)completeRequestWithHTTPResponseFromContext:(id)a0;
- (void)completeRequestWithToken:(id)a0 andContext:(id)a1;
- (id)createContextForRequest:(id)a0;
- (void)destroyCredentialsWithContext:(id)a0;
- (void)handleAddKeychainCreds:(id)a0;
- (void)handleGetRealmInfo:(id)a0;
- (void)handleGetSiteCode:(id)a0;
- (void)handleKerberosOperations:(id)a0 andDelegate:(id)a1;
- (void)handleLogout:(id)a0 removeRealm:(BOOL)a1;
- (void)handleLogoutWithContext:(id)a0 removeRealm:(BOOL)a1;
- (void)handleRemoveRealm:(id)a0;
- (void)handleResetKeychainChoice:(id)a0;
- (id)kerberosForRealm:(id)a0;
- (id)mapKnownPasswordErrorToString:(id)a0;
- (void)removeSettingFile:(int)a0;
- (void)saveValuesAfterSuccessfulAuthentication:(id)a0;
- (void)saveValuesAfterSuccessfulPasswordSync:(id)a0;
- (id)settingsForContext:(id)a0 includeSiteCodeCache:(BOOL)a1;

@end
