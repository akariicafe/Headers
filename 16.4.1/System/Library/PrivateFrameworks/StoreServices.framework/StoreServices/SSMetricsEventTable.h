@interface SSMetricsEventTable : SSEventsTableBase

+ (id)databasePath;
+ (id)_eventsTableName;

- (BOOL)_migrateToVersion3;
- (BOOL)_migrateToVersion1;
- (id)_pragmaValueForName:(id)a0;
- (BOOL)_migrateToVersion2;
- (BOOL)_setupDatabase;
- (void)performTransactionWithBlock:(id /* block */)a0;

@end
