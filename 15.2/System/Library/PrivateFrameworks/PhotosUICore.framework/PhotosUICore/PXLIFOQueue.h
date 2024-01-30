@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (void)dispatchAsync:(id /* block */)a0;
- (id)initWithTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)_executeNextPendingBlock;

@end
