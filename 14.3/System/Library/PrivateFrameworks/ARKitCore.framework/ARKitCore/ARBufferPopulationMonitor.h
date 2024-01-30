@class NSObject, ARBufferPopulationRegistry;
@protocol OS_dispatch_queue, ARBufferPopulationMonitorDelegate;

@interface ARBufferPopulationMonitor : NSObject {
    ARBufferPopulationRegistry *_bufferPopulationRegistry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferPopulationRegistryLock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct __IOSurfaceNotifier { } *_surfaceNotifier;
    NSObject<OS_dispatch_queue> *_surfaceNotifierCallbackQueue;
    void *_weakReferenceForSurfaceNotifierCallback;
}

@property (readonly, nonatomic) unsigned long long count;
@property (weak, nonatomic) id<ARBufferPopulationMonitorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDelegate:(id)a0;
- (void)trackDataBuffer:(struct __CVBuffer { } *)a0 withLabel:(id)a1;
- (void)trackPixelBuffer:(struct __CVBuffer { } *)a0 withLabel:(id)a1;
- (unsigned long long)countWithLabel:(id)a0;
- (void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned int)a0;
- (void)trackSurface:(struct __IOSurface { } *)a0 withLabel:(id)a1;
- (void)trackDataBuffer:(struct __CVBuffer { } *)a0;
- (void)trackPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)trackSurface:(struct __IOSurface { } *)a0;

@end
