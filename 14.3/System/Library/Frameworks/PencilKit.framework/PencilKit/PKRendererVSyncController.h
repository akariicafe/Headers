@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererVSyncController : NSObject {
    NSObject<OS_dispatch_queue> *_vSyncQueue;
    NSObject<OS_dispatch_queue> *_runloopQueue;
    NSHashTable *_rendererControllers;
    struct __IOMobileFramebuffer { } *_ioMobileFramebuffer;
}

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)createVSyncNotifications;
- (void)signalVSyncSemaphore:(double)a0 presentationTime:(unsigned long long)a1;
- (void)addRendererController:(id)a0;
- (void)removeRendererController:(id)a0;
- (void)removeVSyncNotifications;

@end
