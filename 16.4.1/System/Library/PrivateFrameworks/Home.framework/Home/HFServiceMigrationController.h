@class HFHomeKitDispatcher, HMHome;

@interface HFServiceMigrationController : NSObject

@property (retain, nonatomic) HFHomeKitDispatcher *dispatcher;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long timeoutOverride;

+ (id)accessoriesToMigrateFavoritesForHome:(id)a0;
+ (BOOL)homeNeedsMigration:(id)a0;
+ (BOOL)homeNeedsToDisplayMigrationOnboardingUI;
+ (id)primaryServicesToMigrateForHome:(id)a0;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)migrateServicesToAccessory;

@end
