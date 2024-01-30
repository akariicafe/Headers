@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject {
    NSString *_dbPath;
    _PASSqliteDatabase *_db;
    id _lockStateNotificationToken;
    BOOL _allowSkipSchema;
    id /* block */ _sourceRecoverer;
    unsigned long long _maxTimesAccessed;
}

+ (id)getSchema:(unsigned long long *)a0;
+ (long long)migrate:(id)a0 to:(id)a1 forStore:(id)a2;
+ (long long)_migrate:(id)a0 forStore:(id)a1;
+ (id)_sessionDataToBatchWithNumberOfColumns:(unsigned long long)a0 rowsData:(id)a1 labelsData:(id)a2;
+ (BOOL)_runQueries:(id)a0 andUpdateVersionTo:(unsigned int)a1 inTransactionOnDb:(id)a2 forStore:(id)a3;
+ (double)lastUsedTimestampLimit;
+ (void)setLastUsedTimestampLimit:(double)a0;
+ (id)inMemoryStoreForTesting;

- (id)initWithPath:(id)a0;
- (void)deleteSessionsWithBundleId:(id)a0 itemId:(id)a1;
- (void)updateSessionsAndLabelForModel:(id)a0 block:(id /* block */)a1;
- (void)_loadDataForModel:(id)a0 positiveRowId:(unsigned long long)a1 negativeRowId:(unsigned long long)a2 excludeItemIdsUsedWithin:(double)a3 limit:(unsigned long long)a4 onlyAppleInternal:(BOOL)a5 positiveLabel:(unsigned long long)a6 skew:(double)a7 block:(id /* block */)a8;
- (void)enumerateSessionDescriptorsUsingBlock:(id /* block */)a0;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(BOOL)a3 block:(id /* block */)a4;
- (void)loadSessionsForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labels:(id)a2 batchSize:(unsigned long long)a3 block:(id /* block */)a4;
- (id)initWithPath:(id)a0 allowSkipSchema:(BOOL)a1;
- (id)init;
- (void)updateLastTrainingFeaturizationForModel:(id)a0 andData:(id)a1;
- (void)limitSessionsWithSessionDescriptor:(id)a0 withLabel:(id)a1 limit:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)storeSession:(id)a0 source:(id)a1 label:(long long)a2 model:(id)a3 bundleId:(id)a4 domainId:(id)a5 itemIds:(id)a6 isAppleInternal:(BOOL)a7;
- (id)sessionStatsForSessionDescriptor:(id)a0;
- (id)lastTrainingFeaturizationForModelName:(id)a0 andLocale:(id)a1;
- (void)dealloc;
- (void)_unregisterUnlockHandler;
- (void)loadDataForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(BOOL)a3 positiveLabel:(unsigned long long)a4 skew:(double)a5 block:(id /* block */)a6;
- (long long)_openDbIfUnlocked;
- (id)sessionDimensionsForModel:(id)a0 startingRowId:(unsigned long long)a1 onlyAppleInternal:(BOOL)a2 labelFilter:(id)a3;
- (id)dbForTesting;
- (BOOL)isDbOpen;
- (void)limitSessionsByMaxTimesAccessed;
- (void)closeDbForTesting;
- (long long)_unsafeOpenDbIfUnlocked;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 withSkew:(double)a2 andLimit:(int)a3 block:(id /* block */)a4;
- (void)_registerUnlockHandler;
- (long long)migrateTo:(id)a0;
- (void)storeSession:(id)a0 label:(long long)a1 model:(id)a2 bundleId:(id)a3 domainId:(id)a4 itemIds:(id)a5 isAppleInternal:(BOOL)a6;
- (void)vacuumDb;
- (void)_loadBatchForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labels:(id)a2 batchSize:(unsigned long long)a3 block:(id /* block */)a4;
- (id)sessionStats;
- (void)setSourceRecoverer:(id /* block */)a0;
- (void)storeSession:(id)a0 source:(id)a1 label:(long long)a2 model:(id)a3;
- (void)_loadDataForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labelAndStartRows:(id)a2 batchSize:(unsigned long long)a3 supportPerLabel:(unsigned long long)a4 block:(id /* block */)a5;
- (void)limitSessionsByLastUsedTTL:(double)a0;
- (void)limitSessionsForEachLabelWithSessionDescriptor:(id)a0 totalSessionLimit:(unsigned long long)a1;
- (unsigned long long)numberOfRowsInTable:(id)a0;
- (void)setMaxTimesAccessed:(unsigned long long)a0;
- (void)_loadDataFromLabelAndTuples:(id)a0 model:(id)a1 numberOfRows:(unsigned long long)a2 numberOfColumns:(unsigned long long)a3 lastUsedMax:(double)a4 block:(id /* block */)a5;
- (void)loadDataForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labels:(id)a2 batchSize:(unsigned long long)a3 block:(id /* block */)a4;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(BOOL)a3 positiveLabel:(unsigned long long)a4 skew:(double)a5 block:(id /* block */)a6;
- (BOOL)createSnapshot:(id)a0;
- (void)deleteSessionsWithBundleId:(id)a0 domainId:(id)a1;
- (id)getSchema:(unsigned long long *)a0;
- (void)deleteSessionsWithBundleId:(id)a0;
- (void)logDbNotOpenEvent;
- (unsigned long long)sessionDescriptorIdFor:(id)a0;
- (void)storeSession:(id)a0 label:(long long)a1 model:(id)a2;
- (BOOL)_truncateDbIfCorrupted;
- (id)recoverSourceFromData:(id)a0;

@end
