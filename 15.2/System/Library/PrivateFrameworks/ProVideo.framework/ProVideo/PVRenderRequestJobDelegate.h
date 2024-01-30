@class NSString, PVRenderRequest, PVRenderer, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {
    PVRenderer *m_pvRenderer;
    PVRenderRequest *m_request;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } m_renderManager;
    id /* block */ m_completionHandler;
    void *m_destinationBitmaps;
}

@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)jobTypeTag;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)finishCancelledJob;
- (int)jobPriority;
- (int)graphBuildThreadPriority;
- (int)renderContextPriority;
- (void)buildGraph:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (void)finishCompletedJob;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (unsigned long long)packedFamilyCode;
- (unsigned int)outputCVPixelBufferFormat;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1 pvRenderer:(id)a2;

@end
