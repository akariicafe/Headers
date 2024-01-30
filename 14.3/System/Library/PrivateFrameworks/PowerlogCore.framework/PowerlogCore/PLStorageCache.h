@class NSMutableDictionary, NSDate;

@interface PLStorageCache : NSObject

@property (retain) NSMutableDictionary *lastEntryCache;
@property (retain) NSMutableDictionary *stagingEntryCache;
@property (retain) NSMutableDictionary *stagingAggregateEntryCache;
@property (retain, nonatomic) NSDate *lastCacheFlushDate;
@property (retain) NSMutableDictionary *countWarnings;
@property (retain) NSMutableDictionary *countSafetyDrop;
@property long long lastEntryCacheSize;
@property long long stagingEntryCacheSize;

+ (id)sharedStorageCache;
+ (void)syncAndDispatchForEntryCache:(id)a0 forEntryKey:(id)a1 withBlock:(id /* block */)a2;

- (long long)entryIDForNewEntry:(id)a0;
- (void)logSizeOfLastEntryCache;
- (void)flushStagingEntryCacheToDatabase;
- (id)stagingEntryCacheForEntryKey:(id)a0 withIDLessThan:(long long)a1;
- (id)init;
- (int)limitOfType:(id)a0 forEntryKey:(id)a1;
- (void).cxx_destruct;
- (void)clearLastEntryCacheForEntryKey:(id)a0;
- (id)getEntryFromDBForEntryKey:(id)a0 withMatchingKeyToValue:(id)a1;
- (void)enumerateEntryCache:(id)a0 withBlock:(id /* block */)a1;
- (void)addToLastEntryCache:(id)a0;
- (long long)stagingEntryCacheSizeForEntryKey:(id)a0;
- (void)enumerateStagingEntryCacheForEntryKey:(id)a0 withBlock:(id /* block */)a1;
- (id)matchingPairs:(id)a0;
- (id)lastEntryCacheForEntryKey:(id)a0;
- (id)stagingEntryCacheForEntryKey:(id)a0 withID:(long long)a1;
- (void)updateStagingEntryCacheWithEntry:(id)a0 withBlock:(id /* block */)a1;
- (void)addToStagingAggregateEntryCache:(id)a0;
- (id)cachedEntryForEntryKey:(id)a0 withEntryID:(long long)a1;
- (id)getQueryForAggregateEntryKey:(id)a0 withMatchingKeyToValue:(id)a1;
- (void)dumpEntryCache:(id)a0;
- (long long)addToStagingEntryCache:(id)a0;
- (void)flushStagingAggregateEntryCacheToDatabase;
- (void)insertIntoStagingEntryCache:(id)a0;
- (void)dumpLastEntryCache;
- (void)dumpStagingEntryCache;
- (void)addToLastEntryCacheSubKey:(id)a0;
- (void)logSizeOfStagingEntryCache;
- (void)setNextEntryIDForEntryKey:(id)a0 toEntryID:(long long)a1;
- (void)logFullLastEntryCacheForEntryKey:(id)a0;
- (id)lastEntryCacheForEntryKey:(id)a0 withSubEntryKey:(id)a1;
- (void)logSizeOfEntryCache:(id)a0;
- (void)logStagingEntryCacheForEntryKey:(id)a0;
- (id)stagingEntryCacheIDsForEntryKey:(id)a0;
- (void)enumerateStagingEntryCacheWithBlock:(id /* block */)a0;
- (id)stagingEntryCacheForEntryKey:(id)a0 withComparisons:(id)a1 isSingleton:(BOOL)a2;
- (void)lastEntryCachePruneToDate:(id)a0;
- (id)stagingEntryCacheForEntryKey:(id)a0;

@end
