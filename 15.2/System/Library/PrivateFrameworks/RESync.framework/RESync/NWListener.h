@class NSObject;
@protocol OS_dispatch_queue, OS_nw_listener, OS_dispatch_semaphore;

@interface NWListener : NSObject {
    NSObject<OS_dispatch_queue> *listenerQueue;
    NSObject<OS_dispatch_queue> *transportQueue;
    NSObject<OS_dispatch_semaphore> *readySemaphore;
    NSObject<OS_nw_listener> *listener;
    int listenerState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } layerLock;
    void *layer;
}

- (void)stopListening;
- (id)initWithLayer:(void *)a0;
- (void)setListener:(id)a0;
- (void).cxx_destruct;
- (void)waitForReady;

@end
