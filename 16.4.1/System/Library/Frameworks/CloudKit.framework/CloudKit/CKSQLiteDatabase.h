@class NSData, CKSQLiteTOCTable, NSString, CKSQLiteTOCTableGroupTable, NSDate, NSMutableArray, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_group;

@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    struct sqlite3 { } *_db;
    struct { struct _opaque_pthread_t *accessThread; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; } _serializer;
    unsigned int _savepointNestCount;
    NSMutableArray *_transactionCompletionHandlers;
    NSMutableSet *_validatedTableGroups;
    _Atomic int _tableOrGroupCount;
    NSObject<OS_dispatch_group> *_databaseGroup;
    NSDate *_activityCoalesceDate;
}

@property (readonly, nonatomic) NSData *uniquingKey;
@property (readonly, nonatomic) NSMapTable *tableGroupCache;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, nonatomic) CKSQLiteTOCTable *tocTable;
@property (readonly, nonatomic) CKSQLiteTOCTableGroupTable *tableGroupTable;
@property (readonly, nonatomic) BOOL databaseWasCreated;
@property (nonatomic) BOOL removeWhenClosed;
@property (readonly, nonatomic) int options;

+ (void)initialize;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (id)databaseArchiveWithObject:(id)a0;
+ (void)removeLegacyDatabaseAtPath:(id)a0;
+ (unsigned long long)openDatabaseCount;
+ (id)unarchivedObjectFromDatabaseArchive:(id)a0;
+ (id)databaseInDirectory:(id)a0 error:(id *)a1;
+ (id)databaseInDirectory:(id)a0 options:(int)a1 error:(id *)a2;
+ (id)uniquingKeyForDatabaseDirectory:(id)a0;

- (id)stringValueForKey:(id)a0;
- (unsigned long long)changeCount;
- (void)incrementTableOrGroupCount;
- (id)initWithDatabaseDirectory:(id)a0 options:(int)a1;
- (void)setupDatabaseConnection;
- (BOOL)tableGroupWasPreviouslyValidated:(id)a0;
- (id)dateValueForKey:(id)a0;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)allTableNames:(id *)a0;
- (void)decrementTableOrGroupCount;
- (id)dropTable:(id)a0;
- (id)validateOpenDatabase;
- (void)assertInTransaction;
- (id)removeDatabaseDirectory;
- (id)dataValueForKey:(id)a0;
- (id)sqlErrorWithMessage:(id)a0;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (void *)serializer;
- (void)invalidateCachedStatements;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (id)executeSQL:(id)a0;
- (id)numberValueForKey:(id)a0;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (id)objectValueForKey:(id)a0;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)openExistingDatabase;
- (void)dealloc;
- (void)forceClosedForUnitTest;
- (void)closeDatabase;
- (long long)lastInsertRowID;
- (id)UUIDValueForKey:(id)a0;
- (void)assertDbNotSerialized;
- (void)serializeDatabase:(id /* block */)a0;
- (id)bootstrap;
- (void)removeValidatedTableGroup:(id)a0;
- (void)setObjectValue:(id)a0 forKey:(id)a1;
- (id)_pruneTables;
- (id)description;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (id)performTOCTransaction:(id /* block */)a0;
- (id)databaseFilePath;
- (void).cxx_destruct;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (void)tableGroupPassedValidation:(id)a0;
- (void)assertDbSerialized;
- (id)createNewDatabase;
- (id)_validateVersionNumbers;

@end
