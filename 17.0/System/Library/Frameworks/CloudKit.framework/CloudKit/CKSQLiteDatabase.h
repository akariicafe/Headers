@class NSData, NSString, CKSQLiteTOCTableGroup, NSMutableArray, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_group;

@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    struct sqlite3 { } *_db;
    struct { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } waitCond; _Atomic unsigned long long accessThread; } _serializer;
    CKSQLiteTOCTableGroup *_tocTableGroup;
    unsigned int _savepointNestCount;
    NSMutableArray *_transactionCompletionHandlers;
    NSMutableSet *_validatedTableGroups;
    NSObject<OS_dispatch_group> *_databaseGroup;
    CKSQLiteDatabase *_registryDatabase;
}

@property (readonly, nonatomic) NSData *uniquingKey;
@property (readonly, nonatomic) NSMapTable *tableGroupCache;
@property (nonatomic) BOOL isEmpty;
@property (retain, nonatomic) NSObject *databaseManagerData;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, nonatomic) BOOL databaseWasCreated;
@property (nonatomic) BOOL removeWhenClosed;
@property (readonly, nonatomic) unsigned long long options;

+ (id)unarchivedObjectFromDatabaseArchive:(id)a0;
+ (id)temporaryDatabaseDirectory;
+ (void)initialize;
+ (id)newInMemoryDatabase:(id *)a0;
+ (id)databaseInDirectory:(id)a0 registryDatabase:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)uniquingKeyForDatabaseDirectory:(id)a0;
+ (BOOL)databaseDidDealloc:(id)a0 timeout:(double)a1;
+ (id)databaseArchiveWithObject:(id)a0;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (void)resetValidatedDatabases;
+ (void)removeLegacyDatabaseAtPath:(id)a0;

- (unsigned long long)changeCount;
- (id)_pruneTables;
- (void)assertDbSerialized;
- (void)dealloc;
- (id)allTableNames:(id *)a0;
- (id)databaseFilePath;
- (id)setNumberValue:(id)a0 forKey:(id)a1;
- (id)openExistingDatabase:(BOOL)a0;
- (void)assertDbNotSerialized;
- (id)setDateValue:(id)a0 forKey:(id)a1;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (id)setStringValue:(id)a0 forKey:(id)a1;
- (id)databaseManager:(id *)a0;
- (void *)serializer;
- (id)deallocToken;
- (void)removeValidatedTableGroup:(id)a0;
- (id)dateValueForKey:(id)a0 error:(id *)a1;
- (id)setDataValue:(id)a0 forKey:(id)a1;
- (void)tableGroupPassedValidation:(id)a0;
- (void)closeDatabase;
- (id)tocTableGroup;
- (id)_validateVersionNumbers;
- (id)initWithDatabaseDirectory:(id)a0 registryDatabase:(id)a1 options:(unsigned long long)a2;
- (id)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)description;
- (id)executeSQL:(id)a0;
- (long long)lastInsertRowID;
- (id)bootstrap;
- (void).cxx_destruct;
- (id)performInDatabaseTransaction:(id /* block */)a0;
- (void)usingTableGroupCachePerformBlock:(id /* block */)a0;
- (id)validateOpenDatabase;
- (id)setObjectValue:(id)a0 forKey:(id)a1;
- (BOOL)tableGroupWasPreviouslyValidated:(id)a0;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)stringValueForKey:(id)a0 error:(id *)a1;
- (id)managerForRegistryDatabase:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)numberValueForKey:(id)a0 error:(id *)a1;
- (id)dropTable:(id)a0;
- (void)traceSQL;
- (void)finalizeHandle:(void *)a0;
- (id)UUIDValueForKey:(id)a0 error:(id *)a1;
- (id)createNewDatabase;
- (id)removeDatabaseDirectory;
- (void)setupDatabaseConnection;
- (id)dataValueForKey:(id)a0 error:(id *)a1;
- (id)objectValueForKey:(id)a0 error:(id *)a1;
- (void)assertInTransaction;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (id)sqlErrorWithMessage:(id)a0;

@end
