@class ACAccountStore, ACAccount;

@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL primaryICloudACAccountIsValid;
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;
@property (readonly) BOOL unsafeUntilSystemReady_primaryICloudAccountEnabled;

+ (id)sharedInstance;
+ (id)accountDescriptionWithACAccount:(id)a0;
+ (id)getAppleIDSession;

- (id)accessQueue;
- (id)status;
- (id)unsafeUntilSystemReady_primaryICloudAccountCalDavService;
- (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 toACAccount:(id)a2 inStore:(id)a3 completionHandler:(id /* block */)a4;
- (void)_setPrimaryICloudACAccount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)accountStoreDidChange:(id)a0;
- (void)invalidatePrimaryICloudACAccount;
- (void)dealloc;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void)internalInvalidatePrimaryICloudACAccount;
- (id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
- (void)_unsetMigrationFlagsWithACAccount:(id)a0 inStore:(id)a1 completionHandler:(id /* block */)a2;

@end
