@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _FMQueueScheduler : NSObject <FMScheduler>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)initWithQueue:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
