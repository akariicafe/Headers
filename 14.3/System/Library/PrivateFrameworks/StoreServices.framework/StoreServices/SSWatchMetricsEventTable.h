@interface SSWatchMetricsEventTable : SSEventsTableBase

+ (id)databasePath;

- (BOOL)_migrateToVersion3;
- (BOOL)_migrateToVersion1;
- (BOOL)_migrateToVersion2;
- (BOOL)_setupDatabase;
- (BOOL)_migrateToVersion4;
- (BOOL)_migrateToVersion5;
- (BOOL)_migrateToVersion6;
- (BOOL)_migrateToVersion7;

@end
