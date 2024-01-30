@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EFQueueScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) BOOL prefersImmediateExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performSyncBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)assertIsExecuting:(BOOL)a0;
- (void)suspend;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0;
- (id)performWithObject:(id)a0;
- (void)performSyncBarrierBlock:(id /* block */)a0;
- (id)init;
- (void)performVoucherPreservingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithQueue:(id)a0;

@end
