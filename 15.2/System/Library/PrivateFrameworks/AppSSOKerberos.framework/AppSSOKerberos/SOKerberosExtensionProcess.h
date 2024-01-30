@class SOKeychainHelper, NSMutableDictionary, NSMapTable, SOKerberosHelper;

@interface SOKerberosExtensionProcess : NSObject

@property (retain, nonatomic) NSMutableDictionary *kerberosByRealm;
@property (retain, nonatomic) NSMapTable *requestContextMapping;
@property (retain) SOKerberosHelper *kerberosHelper;
@property (retain, nonatomic) SOKeychainHelper *keychainHelper;

- (void).cxx_destruct;
- (id)init;
- (void)handleMigration;
- (void)beginAuthorizationWithRequest:(id)a0;
- (void)cancelAuthorizationWithRequest:(id)a0;
- (void)removeSettingFile:(int)a0;
- (void)handleLogout:(id)a0 removeRealm:(BOOL)a1;
- (void)handleGetSiteCode:(id)a0;
- (void)handleRemoveRealm:(id)a0;
- (void)handleResetKeychainChoice:(id)a0;
- (void)handleGetRealmInfo:(id)a0;
- (id)createContextForRequest:(id)a0;
- (BOOL)checkSourceAppACLWithContext:(id)a0;
- (void)attemptKerberosWithContext:(id)a0 andDelegate:(id)a1;
- (id)settingsForContext:(id)a0 includeSiteCodeCache:(BOOL)a1;
- (void)completeRequestWithToken:(id)a0 andContext:(id)a1;
- (void)completeRequestWithHTTPResponseFromContext:(id)a0;
- (void)saveValuesAfterSuccessfulAuthentication:(id)a0;
- (void)handleAddKeychainCreds:(id)a0;
- (void)handleKerberosOperations:(id)a0 andDelegate:(id)a1;
- (void)destroyCredentialsWithContext:(id)a0;
- (void)resetUIOnDelegate:(id)a0;
- (void)saveValuesAfterSuccessfulPasswordSync:(id)a0;
- (id)mapKnownPasswordErrorToString:(id)a0;
- (id)kerberosForRealm:(id)a0;

@end
