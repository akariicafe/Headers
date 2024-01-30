@class NSString, CNSuspendableSchedulerDecorator;

@interface CNUIAfterCACommitScheduler : NSObject <CNScheduler>

@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly, nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)initWithSchedulerProvider:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)init;
- (id)performCancelableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
