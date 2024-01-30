@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCEffectsManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    BOOL _effectsRegistered;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loggingLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPrintTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastReceivedTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSentTimestamp;
    int _consecutiveDroppedFrameCount;
    int _cameraFrameCount;
    int _sentFrameCount;
    int _receivedFrameCount;
    int _droppedFrameCount;
    int _failedFrameCount;
    BOOL _forceDisableEffectsHealthCheck;
    struct opaqueVCRemoteImageQueue { } *_senderQueue;
    struct __CFAllocator { } *_bufferAllocator;
    struct __CVBuffer { } *_lastReceivedPixelBuffer;
    struct __CVBuffer { } *_lastReceivedDepthBuffer;
    int _thermalPressureLevel;
}

@property (nonatomic) id delegate;
@property (retain) NSMutableArray *effectsArray;

+ (id)sharedManager;

- (void)capturedPixelBuffer:(struct __CVBuffer { } *)a0 depthBuffer:(struct __CVBuffer { } *)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 imageData:(id)a3 toClient:(id)a4;
- (BOOL)createAllocators;
- (void)capturedPixelBuffer:(struct __CVBuffer { } *)a0 depthDataPixelBuffer:(struct __CVBuffer { } *)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 imageData:(id)a3;
- (void)updateThermalLevel:(int)a0;
- (BOOL)isFaceMeshTrackingEnabled;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 imageData:(id)a2 processTime:(id)a3;
- (void)resetEffectsLogging;
- (id)init;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)checkEffectsHealth;
- (BOOL)isEffectsOn;
- (void)releaseAllocators;
- (void)registerBlocksForService;
- (void)effectsRegistered:(BOOL)a0;
- (void)dealloc;

@end
