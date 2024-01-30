@class MCMUserIdentityCache;

@interface MCMContainerMigrator : NSObject

@property (retain, nonatomic) MCMUserIdentityCache *userIdentityCache;

+ (id)sharedInstance;

- (id)initWithUserIdentityCache:(id)a0;
- (void).cxx_destruct;
- (void)_checkIfDeviceMayNeedSystemContainerACLMigration:(id)a0;
- (BOOL)_migrateBundleContainersWithError:(id *)a0;
- (BOOL)_performEntitlementBypassListMigrationWithError:(id *)a0;
- (BOOL)performSynchronousBuildUpgradeMigration:(id)a0 context:(id)a1 error:(id *)a2;

@end
