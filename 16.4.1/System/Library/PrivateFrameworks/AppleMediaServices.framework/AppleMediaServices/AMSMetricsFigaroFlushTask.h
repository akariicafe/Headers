@class NSString, AMSURLSession, AMSPromise;
@protocol AMSBagProtocol, AMSMetricsDataSource;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushTask> {
    AMSPromise *_currentCancellableDataTaskPromise;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentCancellableDataTaskPromiseLock;
}

@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) id<AMSMetricsDataSource> dataSource;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (copy, nonatomic) NSString *topic;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (BOOL)_shouldClearEventsDespiteError:(id)a0 result:(id)a1;
- (id)_mescalSignatureWithBodyData:(id)a0 error:(id *)a1;
- (id)performFlush;
- (BOOL)cancel;
- (id)initWithDataSource:(id)a0 bag:(id)a1;
- (id)_nextBatchWithConfig:(id)a0 topic:(id)a1 maxBatchSize:(long long)a2;
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)a0 topic:(id)a1 maxBatchSize:(long long)a2 requestCount:(unsigned long long)a3 flushedEventCount:(unsigned long long)a4 config:(id)a5;
- (void).cxx_destruct;
- (id)_postBatch:(id)a0;

@end
