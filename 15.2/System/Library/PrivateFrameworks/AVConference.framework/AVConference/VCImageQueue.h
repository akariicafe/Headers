@class VCPixelBufferOverlay, NSMutableArray, VCStreamOutput;
@protocol VCStreamSychronizationDelegate;

@interface VCImageQueue : NSObject {
    struct _CAImageQueue { } *_caQueue;
    struct OpaqueFigImageQueue { } *_figQueue;
    struct __CFDictionary { } *_storedAttributes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _enqueueLock;
    unsigned int _slot;
    BOOL _imageQueueProtected;
    unsigned int _enqueuedFrameCount;
    _Atomic int _frameCount;
    NSMutableArray *_frameCountHistory;
    VCPixelBufferOverlay *_pixelBufferOverlay;
    VCStreamOutput *_streamOutput;
    struct __CFAllocator { } *_streamOutputAllocator;
    id _synchronizationDelegate;
}

@property unsigned int frameRate;
@property BOOL imageQueueProtected;
@property long long streamToken;
@property (readonly) BOOL usingRemoteQueue;
@property (retain) VCStreamOutput *streamOutput;
@property BOOL isLocalVideo;
@property (nonatomic, getter=isLowLatencyEnabled) BOOL lowLatencyEnabled;
@property (nonatomic) id<VCStreamSychronizationDelegate> synchronizationDelegate;

+ (id)drawingContext;

- (int)frameCount;
- (BOOL)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)createAllocators;
- (id)description;
- (void)start;
- (void)pause;
- (void)releaseAllocators;
- (void)dealloc;
- (void)stop;
- (id)initWithFrameRate:(unsigned char)a0;
- (void)enqueueAttributes:(struct __CFDictionary { } *)a0;
- (id)initWithFrameRate:(unsigned char)a0 imageQueueProtected:(BOOL)a1;
- (void)cleanupStreamOutput;
- (void)enqueueStreamOutputAttributes:(struct __CFDictionary { } *)a0;
- (float)averageFrameRate;
- (void)emitFrameEnqueuedSignposts:(unsigned long long)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forFrame:(struct __CVBuffer { } *)a2;
- (void)drawOverlayMessageForPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)enqueueStreamOutputFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)enqueuePixelBuffer:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)removeExpiredFrameCounts:(double)a0;
- (void)updateFrameCountHistory;
- (unsigned int)setVideoDestination:(id)a0;
- (void)getQueueRepresentation:(void *)a0;
- (void)createAndCopyPerformanceDictionary:(const struct __CFDictionary **)a0;
- (void)createAndCopyLatencyStatsDictionary:(const struct __CFDictionary **)a0;
- (BOOL)enqueueFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)resetFrameCount;

@end
