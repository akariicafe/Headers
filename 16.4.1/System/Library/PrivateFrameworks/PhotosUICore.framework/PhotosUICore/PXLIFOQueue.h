@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (id)initWithTargetQueue:(id)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)_executeNextPendingBlock;
- (void).cxx_destruct;

@end
