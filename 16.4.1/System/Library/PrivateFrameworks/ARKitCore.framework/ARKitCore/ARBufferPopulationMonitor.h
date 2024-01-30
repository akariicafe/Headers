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

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)countWithLabel:(id)a0;
- (void)emitEndSignpost:(int)a0 surfaceID:(unsigned long long)a1 count:(unsigned long long)a2 timestamp:(double)a3;
- (void)emitStartSignpost:(int)a0 surfaceID:(unsigned long long)a1 count:(unsigned long long)a2 timestamp:(double)a3;
- (void)trackDataBuffer:(struct __CVBuffer { } *)a0;
- (void)trackDataBuffer:(struct __CVBuffer { } *)a0 withLabel:(id)a1 timestamp:(double)a2 signpostType:(int)a3;
- (void)trackPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)trackPixelBuffer:(struct __CVBuffer { } *)a0 withLabel:(id)a1 timestamp:(double)a2 signpostType:(int)a3;
- (void)trackSurface:(struct __IOSurface { } *)a0;
- (void)trackSurface:(struct __IOSurface { } *)a0 withLabel:(id)a1 timestamp:(double)a2 signpostType:(int)a3;
- (void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned int)a0;

@end
