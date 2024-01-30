@interface SSMetricsEventTable : SSEventsTableBase

+ (id)databasePath;
+ (id)_eventsTableName;

- (void)performTransactionWithBlock:(id /* block */)a0;
- (id)_pragmaValueForName:(id)a0;
- (BOOL)_migrateToVersion2;
- (BOOL)_setupDatabase;
- (BOOL)_migrateToVersion3;
- (BOOL)_migrateToVersion1;

@end
