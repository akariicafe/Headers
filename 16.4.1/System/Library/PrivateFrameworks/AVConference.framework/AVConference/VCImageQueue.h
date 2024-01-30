@class VCStreamOutput, NSString, VCPixelBufferOverlay, CAContext, NSMutableArray, CALayer;
@protocol VCStreamSychronizationDelegate;

@interface VCImageQueue : NSObject <VCStreamOutputSource> {
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
    struct __CFAllocator { } *_streamOutputAllocator;
    id _synchronizationDelegate;
    unsigned int _contextId;
    unsigned int _layerHostSlot;
    CAContext *_caContext;
    CALayer *_caLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentsRect;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _transform;
    BOOL _waitForLayoutChange;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _waitForLayoutChangeCondition;
}

@property unsigned int frameRate;
@property BOOL imageQueueProtected;
@property long long streamToken;
@property (readonly) BOOL usingRemoteQueue;
@property BOOL isLocalVideo;
@property (nonatomic, getter=isLowLatencyEnabled) BOOL lowLatencyEnabled;
@property (nonatomic) id<VCStreamSychronizationDelegate> synchronizationDelegate;
@property (retain) VCStreamOutput *streamOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)drawingContext;

- (float)averageFrameRate;
- (void)pause;
- (int)frameCount;
- (void)dealloc;
- (void)stop;
- (void)start;
- (BOOL)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithFrameRate:(unsigned char)a0;
- (void)resetFrameCount;
- (void)cleanupCAContextAndCALayer;
- (void)cleanupStreamOutput;
- (void)configureCALayerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 name:(id)a1;
- (BOOL)createAllocators;
- (void)createAndCopyLatencyStatsDictionary:(const struct __CFDictionary **)a0;
- (void)createAndCopyPerformanceDictionary:(const struct __CFDictionary **)a0;
- (unsigned int)createCAContextWithSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawOverlayMessageForPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)emitFrameEnqueuedSignposts:(unsigned long long)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forFrame:(struct __CVBuffer { } *)a2;
- (void)enqueueAttributes:(struct __CFDictionary { } *)a0;
- (BOOL)enqueueFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)enqueuePixelBuffer:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)enqueueStreamOutputAttributes:(struct __CFDictionary { } *)a0;
- (void)enqueueStreamOutputFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)getQueueRepresentation:(void *)a0;
- (id)initWithFrameRate:(unsigned char)a0 imageQueueProtected:(BOOL)a1;
- (void)releaseAllocators;
- (void)releaseCAContext;
- (void)removeExpiredFrameCounts:(double)a0;
- (void)resetSlotForCALayerHostModeSwitch;
- (unsigned int)setVideoDestination:(id)a0;
- (void)updateFrameCountHistory;

@end
