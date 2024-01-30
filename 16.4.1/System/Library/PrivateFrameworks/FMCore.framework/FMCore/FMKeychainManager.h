@interface FMKeychainManager : NSObject

+ (id)sharedInstance;

- (id)allRecords;
- (id)allServices;
- (BOOL)setData:(id)a0 forAccount:(id)a1 service:(id)a2;
- (id)allAccountsForService:(id)a0;
- (BOOL)setData:(id)a0 forAccount:(id)a1 service:(id)a2 synchronizable:(long long)a3 dataProtectionClass:(long long)a4 migratable:(long long)a5;
- (int)_delete:(id)a0;
- (id)itemForAccount:(id)a0 service:(id)a1 error:(id *)a2;
- (BOOL)setPassword:(id)a0 forAccount:(id)a1 service:(id)a2 synchronizable:(long long)a3 dataProtectionClass:(long long)a4 migratable:(long long)a5;
- (id)dataForAccount:(id)a0 service:(id)a1;
- (BOOL)setPassword:(id)a0 forAccount:(id)a1 service:(id)a2;
- (BOOL)deleteDataForAccount:(id)a0 service:(id)a1;
- (int)_updateWithQuery:(id)a0 attributes:(id)a1;
- (id)passwordForAccount:(id)a0 service:(id)a1;
- (id)_accessibilityForDataProtectionClass:(long long)a0 migratable:(BOOL)a1;
- (int)_add:(id)a0;
- (id)_query:(id)a0 error:(id *)a1;

@end
