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

+ (void)syncAndDispatchForEntryCache:(id)a0 forEntryKey:(id)a1 withBlock:(id /* block */)a2;
+ (id)sharedStorageCache;

- (void)enumerateStagingEntryCacheForEntryKey:(id)a0 withBlock:(id /* block */)a1;
- (void)setNextEntryIDForEntryKey:(id)a0 toEntryID:(long long)a1;
- (void)enumerateStagingEntryCacheWithBlock:(id /* block */)a0;
- (id)lastEntryCacheForEntryKey:(id)a0 withSubEntryKey:(id)a1;
- (id)lastEntryCacheForEntryKey:(id)a0;
- (void)logFullLastEntryCacheForEntryKey:(id)a0;
- (int)limitOfType:(id)a0 forEntryKey:(id)a1;
- (void)logStagingEntryCacheForEntryKey:(id)a0;
- (void)flushStagingAggregateEntryCacheToDatabase;
- (void)addToLastEntryCacheSubKey:(id)a0;
- (id)stagingEntryCacheForEntryKey:(id)a0 withComparisons:(id)a1 isSingleton:(BOOL)a2;
- (long long)stagingEntryCacheSizeForEntryKey:(id)a0;
- (long long)addToStagingEntryCache:(id)a0;
- (void)logSizeOfStagingEntryCache;
- (void)enumerateEntryCache:(id)a0 withBlock:(id /* block */)a1;
- (id)stagingEntryCacheForEntryKey:(id)a0 withID:(long long)a1;
- (void)addToLastEntryCache:(id)a0;
- (void)dumpEntryCache:(id)a0;
- (long long)entryIDForNewEntry:(id)a0;
- (id)cachedEntryForEntryKey:(id)a0 withEntryID:(long long)a1;
- (id)connectionForKey:(id)a0;
- (void)logSizeOfLastEntryCache;
- (id)stagingEntryCacheForEntryKey:(id)a0;
- (void)dumpStagingEntryCache;
- (void)flushStagingEntryCacheToDatabase;
- (void)insertIntoStagingEntryCache:(id)a0;
- (void)lastEntryCachePruneToDate:(id)a0;
- (id)stagingEntryCacheForEntryKey:(id)a0 withIDLessThan:(long long)a1;
- (void)updateStagingEntryCacheWithEntry:(id)a0 withBlock:(id /* block */)a1;
- (id)init;
- (id)stagingEntryCacheIDsForEntryKey:(id)a0;
- (id)matchingPairs:(id)a0;
- (id)getEntryFromDBForEntryKey:(id)a0 withMatchingKeyToValue:(id)a1;
- (void)logSizeOfEntryCache:(id)a0;
- (void).cxx_destruct;
- (void)dumpLastEntryCache;
- (void)addToStagingAggregateEntryCache:(id)a0;
- (void)clearLastEntryCacheForEntryKey:(id)a0;
- (id)getQueryForAggregateEntryKey:(id)a0 withMatchingKeyToValue:(id)a1;

@end
