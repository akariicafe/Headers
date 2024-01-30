@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertBarrierOnQueue;
- (void)performAsync:(id /* block */)a0;
- (id)backingQueueIfExists;
- (void).cxx_destruct;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
