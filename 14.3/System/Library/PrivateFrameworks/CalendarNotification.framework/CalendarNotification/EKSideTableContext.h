@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_persistentStoreCoordinator;
- (void)deleteAllAlarms;
- (BOOL)_removeSqliteFiles;
- (void).cxx_destruct;
- (id)_urlForPersistentStore;
- (id)_pathForPersistentStore;
- (id)nextAlarmFireTime;
- (id)_managedObjectModel;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)insertNewAlarm;
- (id)delayedProximityAlarms;
- (id)refiringAlarms;
- (id)rootDirectory;
- (id)_alarmsMatchingPredicate:(id)a0;
- (BOOL)refiringAlarmAlreadyExists:(int)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)_settingForKey:(id)a0;
- (id)settingForKey:(id)a0;

@end
