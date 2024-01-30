@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_persistentStoreCoordinator;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)_settingForKey:(id)a0;
- (id)_pathForPersistentStore;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)_urlForPersistentStore;
- (id)rootDirectory;
- (id)_managedObjectModel;
- (id)settingForKey:(id)a0;
- (void)deleteAllAlarms;
- (id)insertNewAlarm;
- (void).cxx_destruct;
- (id)nextAlarmFireTime;
- (BOOL)_removeSqliteFiles;
- (void)setSetting:(id)a0 forKey:(id)a1;

@end
