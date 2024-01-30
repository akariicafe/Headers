@class NSString, NSObject, AMSMetricsDatabase;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>

@property (readonly, nonatomic) AMSMetricsDatabase *database;
@property (retain, nonatomic) NSString *currentLockKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long eventCount;

- (id)initWithContainerIdentifier:(id)a0;
- (id)enqueueEvents:(id)a0;
- (void)removeAllEvents;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (void)didFinishBatching;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (void)cancel;
- (void)dealloc;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;

@end
