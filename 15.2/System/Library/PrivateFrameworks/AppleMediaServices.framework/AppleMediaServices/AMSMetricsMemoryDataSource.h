@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>

@property (retain, nonatomic) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)a0;

- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (void)didFinishBatching;
- (void)cancel;
- (id)initWithEvents:(id)a0;

@end
