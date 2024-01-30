@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : CKDPQLCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue;
@property (readonly, nonatomic) double earliestValidDate;
@property unsigned long long cacheRequestCount;
@property unsigned long long cacheHitCount;

+ (void)_evictPCSSQLCachesForAppContainerAccountTuples:(id)a0;
+ (void)registerPCSSQLCacheEvictionActivity;
+ (id)pathForContainer:(id)a0;
+ (void)evictPCSSQLCachesForKnownContainers;
+ (id)globalPCSSQLCacheEvictionQueue;

- (void)clearCache;
- (id)CKStatusReportArray;
- (void)removePCSDataForItemsInZoneWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_initWithContainer:(id)a0;
- (id)infoToUpgradeFromVersion:(unsigned long long)a0;
- (void)removePCSDataForItemsInShareWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_lockedSetPCSData:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 forID:(id)a3;
- (id)createInitialTablesSQL;
- (void).cxx_destruct;
- (void)fetchPCSDataForRecordWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)setZonePCSData:(id)a0 forZoneWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchPCSDataForShareWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)fetchPCSDataForZoneWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_setPCSData:(id)a0 forItemWithID:(id)a1 databaseScope:(long long)a2 itemType:(unsigned long long)a3 withCompletionHandler:(id /* block */)a4;
- (id)path;
- (void)dealloc;
- (void)setSharePCSData:(id)a0 forShareWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)setRecordPCSData:(id)a0 forRecordWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (id)_lockedFetchPCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 ofClass:(Class)a3;

@end
