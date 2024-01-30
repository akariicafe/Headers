@class NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_blocks;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _targetQueue_callingOut;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queueWithDispatchQueue:(id)a0;
+ (id)queueWithMainRunLoopModes:(id)a0;

- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)assertBarrierOnQueue;
- (void)performAsync:(id /* block */)a0;
- (id)backingQueueIfExists;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (void)assertOnQueue;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
