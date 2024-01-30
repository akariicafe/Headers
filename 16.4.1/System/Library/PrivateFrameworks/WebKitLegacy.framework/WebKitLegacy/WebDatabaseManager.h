@interface WebDatabaseManager : NSObject

+ (void)scheduleEmptyDatabaseRemoval;
+ (void)removeEmptyDatabaseFiles;
+ (id)sharedWebDatabaseManager;

- (id)init;
- (id)origins;
- (id)databasesWithOrigin:(id)a0;
- (void)deleteAllDatabases;
- (void)deleteAllIndexedDatabases;
- (BOOL)deleteDatabase:(id)a0 withOrigin:(id)a1;
- (BOOL)deleteOrigin:(id)a0;
- (id)detailsForDatabase:(id)a0 withOrigin:(id)a1;

@end
