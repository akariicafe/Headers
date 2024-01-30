@class CKContainer, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CKDatabase : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (weak, nonatomic) CKContainer *container;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) long long databaseScope;

- (void)addOperation:(id)a0;
- (id)CKPropertiesDescription;
- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)showAssetCache;
- (unsigned long long)countAssetCacheItems;
- (void)_scheduleOperation:(id)a0;
- (id)description;
- (void)clearAuthTokensForRecordWithID:(id)a0;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)a0;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)a0;
- (void)clearCachesWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)clearCacheEntriesForRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearCacheEntriesForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPCSFromCacheForZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)a0;
- (void)fetchRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveSubscription:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)a0;
- (void)clearRecordCache;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (void)clearAssetCache;

@end
