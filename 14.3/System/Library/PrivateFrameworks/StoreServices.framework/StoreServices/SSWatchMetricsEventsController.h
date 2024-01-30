@class SSWatchMetricsEventTable, NSObject;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsEventsController : NSObject {
    SSWatchMetricsEventTable *_table;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) SSWatchMetricsEventTable *table;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)_numberFormatter;

- (void).cxx_destruct;
- (BOOL)insertWatchMetricEvent:(id)a0 error:(id *)a1;
- (void)discardUnreportableEvents;
- (id)unreportedEventsSinceTimestamp:(long long)a0;
- (void)markAsCompleted:(id)a0;
- (void)markAsFailed:(id)a0;

@end
