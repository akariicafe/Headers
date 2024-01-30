@class CKDClientContext, CKDPCSMemoryCache, NSMutableDictionary, CKDPCSSQLCache, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSCache : NSObject

@property (weak, nonatomic) CKDClientContext *context;
@property (readonly, nonatomic) CKDPCSSQLCache *sqlCache;
@property (readonly, nonatomic) CKDPCSMemoryCache *recordMemoryCache;
@property (readonly, nonatomic) CKDPCSMemoryCache *zoneMemoryCache;
@property (readonly, nonatomic) CKDPCSMemoryCache *shareMemoryCache;
@property (retain, nonatomic) NSMutableDictionary *outstandingFetches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)_setPCSData:(id)a0 forFetchedRecordID:(id)a1 withScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)_setPCSData:(id)a0 forFetchedZoneID:(id)a1 withScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)clearInvalidatedPCSSQLCacheEntriesWithCompletionHandler:(id /* block */)a0;
- (void)_lockedRemoveOutstandingFetch:(id)a0 forItemIDString:(id)a1 databaseScope:(long long)a2;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)getSQLCache:(id /* block */)a0;
- (void)_lockedFetchPCSForItem:(id)a0 memoryCache:(id)a1 forOperation:(id)a2 options:(unsigned long long)a3 fetchCreator:(id /* block */)a4 withCompletionHandler:(id /* block */)a5;
- (void)fetchPCSForRecordWithID:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (void)_lockedGetSQLCacheWithCompletionHandler:(id /* block */)a0;
- (void)fetchPCSForZoneWithID:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)hasStatusToReport;
- (void)removePCSDataForItemsInZoneWithID:(id)a0;
- (void)_lockedHandleMemoryFetchOfItem:(id)a0 pcsData:(id)a1 forOperation:(id)a2 options:(unsigned long long)a3 fetchCreator:(id /* block */)a4 withCompletionHandler:(id /* block */)a5;
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)a0 databaseScope:(long long)a1;
- (void)fetchPCSForShareWithID:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)_lockedCreatePCSCacheFetchOfItem:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 fetchCreator:(id /* block */)a3 withCompletionHandler:(id /* block */)a4;
- (void)updateMemoryCacheWithSharePCSData:(id)a0 forShareWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)removePCSDataForItemsInShareWithID:(id)a0;
- (void)clearPCSCaches;
- (void)clearPCSMemoryCaches;
- (void)_lockedAddOutstandingFetch:(id)a0 forItemIDString:(id)a1 databaseScope:(long long)a2;
- (void)_updateMemoryCacheWithPCSData:(id)a0 forItemWithID:(id)a1 inMemoryCache:(id)a2 databaseScope:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (id)_lockedGetOutstandingFetchForOperation:(id)a0 options:(unsigned long long)a1 itemIDString:(id)a2;
- (void)_setPCSData:(id)a0 forFetchedShareID:(id)a1 withScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)updateMemoryCacheWithRecordPCSData:(id)a0 forRecordWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)updateMemoryCacheWithZonePCSData:(id)a0 forZoneWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;

@end
