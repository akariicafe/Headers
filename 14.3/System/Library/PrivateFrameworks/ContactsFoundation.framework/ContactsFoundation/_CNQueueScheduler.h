@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _CNQueueScheduler : NSObject <CNScheduler>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
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
- (id)initWithQueue:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_queueForQualityOfService:(unsigned long long)a0;

@end
