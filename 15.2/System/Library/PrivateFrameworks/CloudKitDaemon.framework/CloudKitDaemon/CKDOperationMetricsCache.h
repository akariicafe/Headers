@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationMetricsCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (readonly) BOOL hasMetrics;

+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

- (id)initWithCacheDir:(id)a0;
- (void)flushMetricsToPowerLog;
- (void).cxx_destruct;
- (void)addOperationCombinedMetrics:(id)a0 forOperationID:(id)a1 operationType:(long long)a2 operationGroupID:(id)a3 operationGroupName:(id)a4 operationGroupQuantity:(unsigned long long)a5 operationQualityOfService:(long long)a6 appContainerTuple:(id)a7;

@end
