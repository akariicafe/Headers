@class NSString, AMSURLSession, AMSPromise;
@protocol AMSBagProtocol, AMSMetricsDataSource;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushStrategy>

@property (retain, nonatomic) AMSPromise *currentCancellablePromise;
@property (nonatomic) int requestCount;
@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) id<AMSMetricsDataSource> dataSource;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL cancelled;

- (void)cancel;
- (void).cxx_destruct;
- (id)_nextBatchWithConfig:(id)a0 error:(id *)a1;
- (id)_mescalSignatureWithBodyData:(id)a0 error:(id *)a1;
- (id)performFlush;
- (id)initWithDataSource:(id)a0 bag:(id)a1;
- (id)_postBatch:(id)a0 error:(id *)a1;
- (BOOL)_shouldClearEventsDespiteError:(id)a0 result:(id)a1;

@end
