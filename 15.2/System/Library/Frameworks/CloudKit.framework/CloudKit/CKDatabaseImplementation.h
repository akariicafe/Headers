@class CKContainerImplementation, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CKDatabaseImplementation : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) long long databaseScope;
@property (weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (void)showAssetCache;
- (unsigned long long)countAssetCacheItems;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)saveRecord:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)CKStatusReportArray;
- (void)saveRecordZone:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)CKPropertiesDescription;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 wrappingDatabase:(id)a2 convenienceConfiguration:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearCachesWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void)clearAssetCache;
- (void)clearCacheEntriesForRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)fetchPCSFromCacheForZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAuthTokensForRecordWithID:(id)a0;
- (void)_scheduleConvenienceOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearRecordCache;
- (void)clearCacheEntriesForZone:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithContainerImplementation:(id)a0 scope:(long long)a1;
- (void)saveSubscription:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)a0;
- (void)deleteRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;

@end
