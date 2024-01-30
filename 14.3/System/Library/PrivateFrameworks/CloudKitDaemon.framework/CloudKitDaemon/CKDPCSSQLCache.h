@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : CKDPQLCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue;
@property (readonly, nonatomic) double earliestValidDate;
@property unsigned long long cacheRequestCount;
@property unsigned long long cacheHitCount;

+ (void)evictPCSSQLCachesForKnownClientContexts;
+ (void)registerPCSSQLCacheEvictionActivity;
+ (id)globalPCSSQLCacheEvictionQueue;
+ (void)_evictPCSSQLCachesForAppContainerAccountTuples:(id)a0;
+ (id)pathForContext:(id)a0;

- (void)clearCache;
- (id)_initWithClientContext:(id)a0;
- (void)setZonePCSData:(id)a0 forZoneWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)removePCSDataForItemsInZoneWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)path;
- (void)setRecordPCSData:(id)a0 forRecordWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (id)CKStatusReportArray;
- (id)createInitialTablesSQL;
- (void).cxx_destruct;
- (void)_lockedSetPCSData:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 forID:(id)a3;
- (void)setSharePCSData:(id)a0 forShareWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)dealloc;
- (void)fetchPCSDataForRecordWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)_lockedFetchPCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 ofClass:(Class)a3;
- (void)clearInvalidatedCacheEntriesWithCompletionHandler:(id /* block */)a0;
- (void)fetchPCSDataForZoneWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)infoToUpgradeFromVersion:(unsigned long long)a0;
- (void)fetchPCSDataForShareWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_setPCSData:(id)a0 forItemWithID:(id)a1 databaseScope:(long long)a2 itemType:(unsigned long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)removePCSDataForItemsInShareWithID:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
