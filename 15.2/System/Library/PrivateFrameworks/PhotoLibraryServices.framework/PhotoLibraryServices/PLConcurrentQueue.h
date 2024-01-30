@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLConcurrentQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    long long _internalQueue_usedWidth;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) long long width;

- (void)dispatchAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTargetQueue:(id)a0 width:(long long)a1;
- (void)_internalQueue_tryDispatchingNextPendingBlock;

@end
