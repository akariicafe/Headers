@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _HKSPManualQueueBackedScheduler : _HKSPQueueBackedScheduler <HKSPQueueBackedScheduler>

@property (readonly, nonatomic) BOOL isSuspended;
@property (readonly, nonatomic) NSMutableArray *blocks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performCancelableBlock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0 queue:(id)a1;
- (void)suspend;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;

@end
