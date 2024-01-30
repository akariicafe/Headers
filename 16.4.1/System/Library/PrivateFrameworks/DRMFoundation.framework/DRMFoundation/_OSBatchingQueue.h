@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _OSBatchingQueue : NSObject

@property (nonatomic) double maxDelay;
@property (nonatomic) unsigned long long maxQueueDepth;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (copy, nonatomic) id /* block */ workHandler;
@property (retain, nonatomic) NSMutableArray *workItems;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

+ (id)queueWithName:(id)a0 maxBatchingDelay:(double)a1 maxQueueDepth:(unsigned long long)a2 queue:(id)a3 workItemsHandler:(id /* block */)a4;

- (void)addWorkItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 maxBatchingDelay:(double)a1 maxQueueDepth:(unsigned long long)a2 queue:(id)a3 workItemsHandler:(id /* block */)a4;
- (void)unprotectedExecuteWorkItems;

@end
