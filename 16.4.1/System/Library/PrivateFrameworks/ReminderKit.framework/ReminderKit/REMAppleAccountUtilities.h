@class NSArray, ACAccountStore, ACAccount;

@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL cachedICloudACAccountsAreValid;
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount;
@property (retain, nonatomic) ACAccount *_debug_fullICloudACAccount;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;
@property (readonly) NSArray *unsafeUntilSystemReady_allICloudACAccounts;

+ (id)sharedInstance;
+ (id)accountDescriptionWithACAccount:(id)a0;

- (void)accountStoreDidChange:(id)a0;
- (id)accessQueue;
- (id)unsafeUntilSystemReady_displayedHostnameOfICloudACAccountWithAccountIdentifier:(id)a0;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
- (id)unsafeUntilSystemReady_iCloudAccountCalDavServiceWithAccountID:(id)a0;
- (void)invalidateICloudACAccounts;
- (id)unsafeUntilSystemReady_allCloudKitRemindersEnabledICloudACAccounts;
- (void)_updateCachedICloudACAccounts;
- (void)_unsetMigrationFlagsWithACAccount:(id)a0 inStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setPrimaryICloudACAccount:(id)a0;
- (void)dealloc;
- (id)unsafeUntilSystemReady_icloudACAccountMatchingAccountIdentifier:(id)a0;
- (id)init;
- (id)status;
- (void).cxx_destruct;
- (void)_invalidateCachedICloudACAccounts;
- (void)_setNonPrimaryICloudACAccount:(id)a0;
- (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 toACAccount:(id)a2 inStore:(id)a3 completionHandler:(id /* block */)a4;

@end
