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

+ (id)queueWithMainRunLoopModes:(id)a0;
+ (id)queueWithDispatchQueue:(id)a0;

- (void)performAsync:(id /* block */)a0;
- (void)assertOnQueue;
- (id)backingQueueIfExists;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)assertBarrierOnQueue;
- (id)init;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (void).cxx_destruct;

@end
