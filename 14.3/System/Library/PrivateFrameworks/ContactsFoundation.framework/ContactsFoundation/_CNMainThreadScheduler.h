@class NSString;
@protocol CNScheduler;

@interface _CNMainThreadScheduler : NSObject <CNScheduler>

@property (readonly, nonatomic) id<CNScheduler> inlineScheduler;
@property (readonly, nonatomic) id<CNScheduler> jumpToMainScheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)init;
- (id)performCancelableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)schedulerForImmediateExecution;
- (id)schedulerForDelayedExecution;

@end
