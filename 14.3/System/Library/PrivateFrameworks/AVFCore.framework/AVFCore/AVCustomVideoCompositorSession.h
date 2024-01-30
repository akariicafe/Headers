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

+ (id)sessionWithVideoComposition:(id)a0 recyclingSession:(id)a1;
+ (BOOL)_colorPropertiesAreSetInVideoComposition:(id)a0;

- (BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(id *)a0;
- (void)_willDeallocOrFinalize;
- (void)detachVideoComposition;
- (id)getAndClearClientError;
- (void)dealloc;
- (struct OpaqueFigVideoCompositor { } *)_copyFigVideoCompositor;
- (int)_setupFigCallbacks;
- (id)initWithVideoComposition:(id)a0;
- (BOOL)_validateSourcePixelBufferAttributes:(id)a0 andReturnException:(id *)a1;
- (BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)a0 andReturnException:(id *)a1;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame { } *)a0;
- (void)_cleanupFigCallbacks;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 didFinishWithComposedPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 didFinishWithError:(id)a1;
- (int)_customCompositorShouldCancelPendingFrames;
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 requiresRenderUsingSources:(id)a2 withInstruction:(void *)a3;
- (int)_customCompositorShouldAnticipateRenderingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andThenFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)_customCompositorShouldPrerollForRenderingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andThenFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 requestID:(long long)a4;
- (void)_customCompositorFigPropertyDidChange;
- (void)setVideoComposition:(id)a0;
- (id)customVideoCompositor;

@end
