@class NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreItemMetadataRequestController : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
    unsigned long long _lastExpiredMetadataPurgeMachTime;
    NSMutableDictionary *_itemCaches;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionLock;
    long long _transactionCount;
}

@property (class, nonatomic) BOOL importToServerObjectDatabase;
@property (class, readonly, nonatomic) MPStoreItemMetadataRequestController *sharedStoreItemMetadataRequestController;

@property (nonatomic) long long cacheSize;

+ (unsigned long long)optimalBatchSize;

- (void)beginTransaction;
- (void)endTransaction;
- (void)requestStoreItemMetadataForReason:(unsigned long long)a0 withItemIdentifiers:(id)a1 responseHandler:(id /* block */)a2;
- (void)addStoreItemMetadata:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_removeExpiredItemsPeriodically;
- (id)getStoreItemMetadataForRequest:(id)a0 responseHandler:(id /* block */)a1;

@end
