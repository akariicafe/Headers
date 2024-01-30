@interface STStorageDataManager : NSObject

+ (id)applicationRecords;
+ (id)computeBundleRemappings:(id)a0;
+ (id)computeCategoriesForApps:(id)a0;
+ (void)fixClonesInPhotosAndMessages:(id)a0;
+ (id)getLocalAppId:(id)a0 foreignAppId:(id)a1;
+ (id)overridesFor:(id)a0;
+ (id)sharedContainersFor:(id)a0;
+ (id)updateAppsWithPrevious:(id)a0 usageBundles:(id)a1 skipAppRecordBlock:(id /* block */)a2;

@end
