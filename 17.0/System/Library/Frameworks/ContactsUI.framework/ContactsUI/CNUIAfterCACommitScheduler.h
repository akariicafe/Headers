@class NSString, CNSuspendableSchedulerDecorator;

@interface CNUIAfterCACommitScheduler : NSObject <CNScheduler>

@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly, nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithSchedulerProvider:(id)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
