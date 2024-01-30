@class NSBackgroundActivityScheduler, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)schedule:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_schedule:(id /* block */)a0;
- (void)_queue_setSchedulerCriteria;

@end
