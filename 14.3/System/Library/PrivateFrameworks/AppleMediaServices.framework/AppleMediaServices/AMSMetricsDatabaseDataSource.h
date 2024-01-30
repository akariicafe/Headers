@class NSString, NSObject, AMSMetricsDatabase;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>

@property (readonly, nonatomic) AMSMetricsDatabase *database;
@property (retain, nonatomic) NSString *currentLockKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long eventCount;

- (void)cancel;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (id)enqueueEvents:(id)a0;
- (void)didFinishBatching;
- (void)dealloc;
- (void)skipEvents:(id)a0 error:(id *)a1;
- (void)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (void)removeEvents:(id)a0 error:(id *)a1;
- (id)initWithContainerIdentifier:(id)a0;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;

@end
