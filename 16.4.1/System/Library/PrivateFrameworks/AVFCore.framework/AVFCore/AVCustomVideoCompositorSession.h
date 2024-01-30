@class AVVideoCompositionRenderContext, NSDictionary, AVWeakReference, NSError, NSObject, AVVideoComposition;
@protocol OS_dispatch_queue, AVVideoCompositing;

@interface AVCustomVideoCompositorSession : NSObject {
    struct OpaqueFigVideoCompositor { } *_figCustomCompositor;
    BOOL _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    AVWeakReference *_weakSelf;
    void *_callbackContextToken;
    NSObject<OS_dispatch_queue> *_videoCompositionQ;
    AVVideoComposition *_videoComposition;
    BOOL _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;
    id<AVVideoCompositing> _clientCustomCompositor;
    NSObject<OS_dispatch_queue> *_clientErrorQ;
    NSError *_clientError;
    NSObject<OS_dispatch_queue> *_renderContextQ;
    AVVideoCompositionRenderContext *_renderContext;
    NSObject<OS_dispatch_queue> *_finishedRequestQ;
}

@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;

+ (BOOL)_colorPropertiesAreSetInVideoComposition:(id)a0;
+ (id)sessionWithVideoComposition:(id)a0 recyclingSession:(id)a1;

- (void)dealloc;
- (void)_cleanupFigCallbacks;
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 requiresRenderUsingSources:(id)a2 requiresSampleBuffersUsingSources:(id)a3 withInstruction:(void *)a4;
- (struct OpaqueFigVideoCompositor { } *)_copyFigVideoCompositor;
- (void)_customCompositorFigPropertyDidChange;
- (int)_customCompositorShouldAnticipateRenderingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andThenFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)_customCompositorShouldCancelPendingFrames;
- (int)_customCompositorShouldPrerollForRenderingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andThenFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 requestID:(long long)a4;
- (int)_setupFigCallbacks;
- (BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)a0 andReturnException:(id *)a1;
- (BOOL)_validateSourcePixelBufferAttributes:(id)a0 andReturnException:(id *)a1;
- (void)_willDeallocOrFinalize;
- (BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(id *)a0;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 didFinishWithComposedPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 didFinishWithError:(id)a1;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame { } *)a0;
- (id)customVideoCompositor;
- (void)detachVideoComposition;
- (id)getAndClearClientError;
- (id)initWithVideoComposition:(id)a0;
- (void)setVideoComposition:(id)a0;

@end
