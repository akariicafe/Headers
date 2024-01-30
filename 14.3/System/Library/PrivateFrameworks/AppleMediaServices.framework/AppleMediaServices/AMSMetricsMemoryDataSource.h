@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>

@property (retain, nonatomic) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (void)didFinishBatching;
- (void)skipEvents:(id)a0 error:(id *)a1;
- (id)initWithEvents:(id)a0;
- (void)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (void)removeEvents:(id)a0 error:(id *)a1;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;

@end
