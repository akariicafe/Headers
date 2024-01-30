@class ACAccountStore, ACAccount;

@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL primaryICloudACAccountIsValid;
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (readonly) BOOL primaryICloudAccountEnabled;

+ (id)sharedInstance;
+ (id)getAppleIDSession;
+ (id)accountDescriptionWithACAccount:(id)a0;

- (id)accessQueue;
- (id)init;
- (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 toACAccount:(id)a2 inStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void)invalidatePrimaryICloudACAccount;
- (void)_unsetMigrationFlagsWithACAccount:(id)a0 inStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)accountStoreDidChange:(id)a0;
- (void)_setPrimaryICloudACAccount:(id)a0;
- (void)internalInvalidatePrimaryICloudACAccount;
- (id)primaryICloudAccountCalDavService;
- (id)allICloudAccountsWithCloudKitEnabled;

@end
