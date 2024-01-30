@interface WebDatabaseManager : NSObject

+ (void)removeEmptyDatabaseFiles;
+ (void)scheduleEmptyDatabaseRemoval;
+ (id)sharedWebDatabaseManager;

- (id)origins;
- (id)init;
- (id)databasesWithOrigin:(id)a0;
- (id)detailsForDatabase:(id)a0 withOrigin:(id)a1;
- (void)deleteAllDatabases;
- (BOOL)deleteOrigin:(id)a0;
- (BOOL)deleteDatabase:(id)a0 withOrigin:(id)a1;
- (void)deleteAllIndexedDatabases;

@end
