@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
    struct HGRef<HGRenderJob> { struct HGRenderJob *m_Obj; } _currentRenderJob;
    PVVideoCompositingContext *_compositingContext;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct HGRef<HGGLContext> { struct HGGLContext *x0; })rootContext;
- (void)enqueueRenderRequest:(id)a0 completion:(id /* block */)a1;
- (id)getSharedEAGLContext;
- (struct HGRef<PVRenderManager> { struct PVRenderManager *x0; })renderManager;

@end
