@class NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface REOpportunisticTrainingScheduler : RETrainingScheduler {
    NSObject<OS_xpc_object> *_criteria;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    BOOL _scheduled;
}

- (void)performTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelPendindTasks;
- (void)_queue_unschedule;
- (void)_performAllTasks;

@end
