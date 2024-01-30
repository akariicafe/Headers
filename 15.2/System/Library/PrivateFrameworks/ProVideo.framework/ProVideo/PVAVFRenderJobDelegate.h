@class PVTaskToken, PVVideoCompositionInstruction, NSString, PVVideoCompositing, AVAsynchronousVideoCompositionRequest, PVVideoCompositingContext;

@interface PVAVFRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    PVVideoCompositing *m_compositor;
    AVAsynchronousVideoCompositionRequest *m_request;
    PVVideoCompositionInstruction *m_instruction;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_compositionTime;
    BOOL m_thumbnailCompositing;
    struct __CVBuffer { } *m_destinationPixelBuffer;
    struct PerfTimer { double _start; double _end; } m_timer;
    void *m_hgCVGLTextureFactory;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } m_renderManager;
    struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *m_Obj; } m_instructionGraphContext;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } compositionTime;
@property (readonly) PVVideoCompositionInstruction *compositionInstruction;
@property (readonly) AVAsynchronousVideoCompositionRequest *compositionRequest;
@property unsigned int minimumRequestCompletionTimeMS;
@property unsigned int parentCode;
@property unsigned int childCode;
@property (retain) PVTaskToken *token;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)jobTypeTag;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)finishCancelledJob;
- (int)jobPriority;
- (int)renderContextPriority;
- (void)buildGraph:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (void)finishCompletedJob;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (unsigned long long)packedFamilyCode;
- (void)_setupGLTextureFactory:(const void *)a0;
- (void)_setupInputs:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (void)_buildGraph:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2 outputNodes:(void *)a3;
- (id)initWithCompositor:(id)a0 request:(id)a1 compositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 thumbnailCompositing:(BOOL)a3;

@end
