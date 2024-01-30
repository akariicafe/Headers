@class NSHashTable, CARenderer, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;

@interface BCULayerRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSHashTable *_operations;
    CARenderer *_renderer;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    BOOL _suspended;
}

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)_startOperation:(id)a0;
- (id)initWithSuspended:(BOOL)a0;
- (void)_processOperations;
- (void)_disconnectLayer:(id)a0;
- (id)newOperationWithPriority:(float)a0 waitForCPUSynchronization:(BOOL)a1 renderLayer:(id /* block */)a2 completion:(id /* block */)a3;
- (id)newOperationWithPriority:(float)a0 renderLayer:(id /* block */)a1 completion:(id /* block */)a2;

@end
