@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationMetricsCache : CKSQLite

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)addOperationCombinedMetrics:(id)a0 forOperationID:(id)a1 operationType:(long long)a2 operationGroupID:(id)a3 operationGroupName:(id)a4 operationGroupQuantity:(unsigned long long)a5 operationQualityOfService:(long long)a6 appContainerTuple:(id)a7;
- (id)_initWithCacheDir:(id)a0;
- (void)flushMetricsToPowerLog;

@end
