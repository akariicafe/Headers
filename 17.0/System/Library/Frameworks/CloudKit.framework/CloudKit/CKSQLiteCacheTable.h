@class CKSQLiteCacheTableTrackingTable;

@interface CKSQLiteCacheTable : CKSQLiteTable {
    CKSQLiteCacheTableTrackingTable *_trackingTable;
    BOOL _expireCheckPending;
    BOOL _dataExpireScheduled;
}

@property (readonly, nonatomic) unsigned long long entryCountLimit;
@property (readonly, nonatomic) unsigned long long dataSizeLimit;
@property (readonly, nonatomic) double cacheExpirationTime;
@property (readonly, nonatomic) double expireDelay;

+ (id)dataSizeProperties;
+ (id)dbProperties;

- (id)wakeFromDatabase;
- (void)expire:(id)a0;
- (id)createTableSQL;
- (void).cxx_destruct;
- (id)insertObject:(id)a0;
- (unsigned long long)entryCount;
- (void)activityTriggerWasRolledBack;
- (void)activityTriggered:(id)a0;
- (id)didCreateDatabaseTable;
- (unsigned long long)entryDataSize;
- (unsigned long long)expireByCount:(id)a0;
- (unsigned long long)expireByDataSize:(id)a0;
- (unsigned long long)expireByTime:(id)a0;
- (id)extendExpiration:(id)a0;
- (id)extraGroupTables:(id)a0;
- (void)fetchExpirationDate:(id)a0;
- (id)initWithLogicalTableName:(id)a0 entryCountLimit:(unsigned long long)a1 dataSizeLimit:(unsigned long long)a2 expirationTime:(double)a3 expireDelay:(double)a4;
- (id)insertObject:(id)a0 orUpdateProperties:(id)a1 label:(id)a2;
- (id)oldestFirstEnumerator;
- (void)periodicExpire;
- (id)setEntryExpiration:(id)a0 date:(id)a1;
- (unsigned long long)setProperties:(id)a0 valuesToStore:(id)a1 inEntriesMatching:(id)a2 label:(id)a3 error:(id *)a4 predicate:(id /* block */)a5;
- (id)trackingEntry;
- (void)transactionExpireCheck;

@end
