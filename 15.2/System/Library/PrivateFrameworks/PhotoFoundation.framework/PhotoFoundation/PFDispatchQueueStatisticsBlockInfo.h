@interface PFDispatchQueueStatisticsBlockInfo : NSObject

@property BOOL skippedExecuting;
@property (readonly) unsigned long long receivedTimestamp;
@property (readonly) unsigned long long enqueueTimestamp;
@property (readonly) unsigned long long dequeueTimestamp;
@property (readonly) unsigned long long executionTimestamp;
@property (readonly) unsigned long long completionTimestamp;

+ (void)initialize;

- (unsigned long long)currentAbsoluteTime;
- (unsigned long long)nsecBetween:(unsigned long long)a0 and:(unsigned long long)a1;
- (void)blockEnqueued;
- (void)blockDequeued;
- (void)blockWillStart;
- (void)blockCompleted;
- (unsigned long long)executionLatency;
- (unsigned long long)executionTime;
- (id)init;

@end
