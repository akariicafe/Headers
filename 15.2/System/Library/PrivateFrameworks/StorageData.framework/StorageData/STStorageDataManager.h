@interface STStorageDataManager : NSObject

+ (id)updateAppsWithPrevious:(id)a0 usageBundles:(id)a1 skipAppRecordBlock:(id /* block */)a2;
+ (id)computeCategoriesForApps:(id)a0;
+ (id)overridesFor:(id)a0;
+ (id)applicationRecords;
+ (id)computeBundleRemappings:(id)a0;
+ (id)getLocalAppId:(id)a0 foreignAppId:(id)a1;
+ (id)sharedContainersFor:(id)a0;

@end
