@class NSMutableArray, VCPixelBufferOverlay;

@interface VCImageQueue : NSObject {
    struct _CAImageQueue { } *_caQueue;
    struct OpaqueFigImageQueue { } *_figQueue;
    struct __CFDictionary { } *_storedAttributes;
    struct opaqueVCRemoteImageQueue { } *_remoteQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _enqueueLock;
    unsigned int _slot;
    BOOL _imageQueueProtected;
    unsigned int _enqueuedFrameCount;
    NSMutableArray *_frameCountHistory;
    VCPixelBufferOverlay *_pixelBufferOverlay;
}

@property unsigned int frameRate;
@property BOOL imageQueueProtected;
@property long long streamToken;
@property (readonly) BOOL usingRemoteQueue;
@property (nonatomic, getter=isLowLatencyEnabled) BOOL lowLatencyEnabled;

+ (id)drawingContext;

- (id)initWithFrameRate:(unsigned char)a0;
- (void)dealloc;
- (void)stop;
- (id)description;
- (void)pause;
- (void)start;
- (id)initWithFrameRate:(unsigned char)a0 imageQueueProtected:(BOOL)a1;
- (float)averageFrameRate;
- (void)emitFrameEnqueuedSignposts:(unsigned long long)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forFrame:(struct __CVBuffer { } *)a2;
- (void)removeExpiredFrameCounts:(double)a0;
- (void)updateFrameCountHistory;
- (unsigned int)setVideoDestination:(id)a0;
- (void)getQueueRepresentation:(void *)a0;
- (void)createAndCopyPerformanceDictionary:(const struct __CFDictionary **)a0;
- (void)createAndCopyLatencyStatsDictionary:(const struct __CFDictionary **)a0;
- (void)createRemoteQueueWithClientPid:(int)a0;
- (id)getXPCObjectFromRemoteQueue;
- (void)enqueueAttributes:(struct __CFDictionary { } *)a0;
- (BOOL)enqueueFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
