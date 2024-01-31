@class CKSQLiteTOCTableGroup, NSMutableDictionary, CKSQLiteDatabaseManager, NSError, NSObject, CKSQLiteDatabase;

@interface CKSQLiteTableGroup : CKSQLiteTableGroupEntry <CKSQLiteDatabaseKeyValueProperties> {
    struct { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } waitCond; _Atomic unsigned long long accessThread; } _serializerBacking;
    struct { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x1; _Atomic unsigned long long x2; } *_serializer;
    BOOL _valid;
    NSMutableDictionary *_pendingTables;
    NSError *_addTableError;
    CKSQLiteDatabaseManager *_databaseManager;
    NSMutableDictionary *_tablesByName;
    BOOL _deleteTablesOnDealloc;
}

@property (readonly, nonatomic) CKSQLiteTOCTableGroup *tocTableGroup;
@property (retain, nonatomic) NSObject *databaseManagerData;
@property (readonly, nonatomic) CKSQLiteDatabase *db;
@property (readonly, nonatomic) BOOL isNew;
@property (readonly, nonatomic) BOOL isFirstInstance;
@property (readonly, nonatomic) unsigned long long options;
@property (retain, nonatomic) CKSQLiteDatabase *activityPersistenceDatabase;

+ (BOOL)rebootShouldClearData;
+ (id)createTableGroupInstanceInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (void)enumerateGroupsInDatabase:(id)a0 block:(id /* block */)a1;
+ (void)expireGroup:(id)a0 reason:(id)a1 database:(id)a2;
+ (id)groupEntryInDatabase:(id)a0 withGroupName:(id)a1 error:(id *)a2;
+ (id)groupNameWithDomain:(int)a0 domainIdentifier:(id)a1 groupName:(id)a2;
+ (void)groupWillExpire:(id)a0;
+ (id)lookupTableGroupInstanceInCache:(id)a0 withName:(id)a1 options:(unsigned long long)a2;
+ (id)lookupTableGroupInstanceInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (void)purgeGroup:(id)a0;
+ (void)purgeGroupWithName:(id)a0 inDatabase:(id)a1;
+ (id)tableGroupInDatabase:(id)a0 withID:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)tableGroupWithEntry:(id)a0 database:(id)a1 options:(unsigned long long)a2;

- (id)init;
- (void)dealloc;
- (id)createTables:(id *)a0;
- (id)setNumberValue:(id)a0 forKey:(id)a1;
- (long long)validateTableMatchesTOCEntry:(id)a0;
- (id)setDateValue:(id)a0 forKey:(id)a1;
- (id)setStringValue:(id)a0 forKey:(id)a1;
- (id)databaseManager:(id *)a0;
- (void *)serializer;
- (id)dateValueForKey:(id)a0 error:(id *)a1;
- (id)setDataValue:(id)a0 forKey:(id)a1;
- (id)setUUIDValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)updateGroupData:(id)a0;
- (id)setObjectValue:(id)a0 forKey:(id)a1;
- (id)stringValueForKey:(id)a0 error:(id *)a1;
- (void)serialize:(id /* block */)a0;
- (id)numberValueForKey:(id)a0 error:(id *)a1;
- (id)UUIDValueForKey:(id)a0 error:(id *)a1;
- (id)prepareTables;
- (id)dataValueForKey:(id)a0 error:(id *)a1;
- (id)objectValueForKey:(id)a0 error:(id *)a1;
- (id)_purge;
- (id)dbTableNameForLogicalTableName:(id)a0;
- (void)_addExtraTablesForTable:(id)a0;
- (void)_finishConstruction;
- (void)_setupActivityEntry:(id)a0;
- (void)activityTriggerWasRolledBack;
- (void)activityTriggered:(id)a0;
- (id)allTables;
- (void)assertNotSerialized;
- (void)assertSerialized;
- (id)createDBTable:(id)a0;
- (id)finishInitializing;
- (void)groupWillPurge;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (id)migrateDataFromGroup:(id)a0;
- (id)performDataMigration:(id)a0;
- (id)prepareExistingTables;
- (id)prepareNewTables;
- (id)requestCallbackForTarget:(id)a0 withDate:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (id)requestCallbackWithDate:(id)a0 coalescingInterval:(double)a1 minimumSeparation:(double)a2;
- (BOOL)shouldUseDBSerializer;
- (id)tableWithName:(id)a0;
- (id)tocTable;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;
- (void)updateLastUsedDate;

@end
