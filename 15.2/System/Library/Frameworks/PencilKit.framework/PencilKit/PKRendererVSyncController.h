@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererVSyncController : NSObject {
    NSObject<OS_dispatch_queue> *_vSyncQueue;
    NSObject<OS_dispatch_queue> *_runloopQueue;
    NSHashTable *_rendererControllers;
    struct __IOMobileFramebuffer { } *_ioMobileFramebuffer;
}

- (void).cxx_destruct;
- (id)init;

@end
