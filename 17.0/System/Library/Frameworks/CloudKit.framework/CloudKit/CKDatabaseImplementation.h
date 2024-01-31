@class CKContainerImplementation, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CKDatabaseImplementation : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (id)CKStatusReportArray;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 isConvenience:(BOOL)a3;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)a0;
- (void)clearCacheEntriesForRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 wrappingDatabase:(id)a2 convenienceConfiguration:(id)a3 completionHandler:(id /* block */)a4;
- (void)deleteRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)showAssetCache;
- (void)addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)clearCacheEntriesForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)CKPropertiesDescription;
- (id)description;
- (void)clearAssetCache;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)_scheduleConvenienceOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)a0;
- (void)fetchSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchPCSFromCacheForZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPCSFromCacheForShareWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initInternalWithContainerImplementation:(id)a0 scope:(long long)a1;
- (void)clearRecordCache;
- (void)saveSubscription:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveRecordZone:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)countAssetCacheItems;
- (void)clearAuthTokensForRecordWithID:(id)a0;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)fetchPCSFromCacheForRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveRecord:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearCachesWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
