@class NSString, _PASSqliteDatabase;

@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol>

@property (readonly, nonatomic) _PASSqliteDatabase *db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_openFreshHandleForPath:(id)a0 inMemory:(BOOL)a1;
+ (id)_openAnotherHandleForPath:(id)a0;

- (void).cxx_destruct;
- (id)migrations;
- (id)databaseHandle;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id)initInDirectory:(id)a0 inMemory:(BOOL)a1 withMigration:(BOOL)a2;
- (id)initInDirectory:(id)a0 inMemory:(BOOL)a1 withMigration:(BOOL)a2 forTools:(BOOL)a3;
- (BOOL)_handleCorruptionWithCheck:(BOOL)a0 path:(id)a1 inMemory:(BOOL)a2;
- (BOOL)_performMigrationsWithPath:(id)a0 inMemory:(BOOL)a1 attemptIteration:(int)a2;

@end
