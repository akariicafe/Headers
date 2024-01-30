@class NSArray, AVVideoCompositionRenderContext, AVAsynchronousVideoCompositionRequestInternal;
@protocol AVVideoCompositionInstruction;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}

@property (readonly, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } compositionTime;
@property (readonly, nonatomic) NSArray *sourceTrackIDs;
@property (readonly, nonatomic) id<AVVideoCompositionInstruction> videoCompositionInstruction;

- (void)finishWithError:(id)a0;
- (void)_willDeallocOrFinalize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer { } *)a0;
- (void)finishCancelledRequest;
- (struct __CVBuffer { } *)sourceFrameByTrackID:(int)a0;
- (id)initUsingSession:(id)a0 withRenderContext:(id)a1 compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 usingSources:(id)a4 instruction:(id)a5;
- (struct OpaqueFigVideoCompositorFrame { } *)compositionFrame;

@end
