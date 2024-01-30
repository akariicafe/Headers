@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (id)nextAlarmFireTime;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)_pathForPersistentStore;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)insertNewAlarm;
- (void)deleteAllAlarms;
- (void).cxx_destruct;
- (BOOL)_removeSqliteFiles;
- (id)_settingForKey:(id)a0;
- (id)_urlForPersistentStore;
- (id)rootDirectory;
- (id)settingForKey:(id)a0;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
