@class NSLock, NSString, SCNTechnique, SCNNode, AVTAvatarEnvironment, AVTARMaskRenderer, AVTAvatar, AVTPresentationConfiguration, AVTFaceTracker;

@interface AVTRenderer : SCNRenderer <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatarEnvironment *_environment;
    AVTPresentationConfiguration *_presentationConfiguration;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    AVTFaceTracker *_faceTracker;
    unsigned long long _antialiasingMode;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    BOOL _arMaskRendererHasFlippedDepth;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) BOOL arMode;
@property (nonatomic) BOOL pauseSimulation;
@property (retain, nonatomic) AVTFaceTracker *faceTracker;
@property (retain, nonatomic) AVTPresentationConfiguration *presentationConfiguration;
@property (copy, nonatomic) NSString *framingMode;
@property (nonatomic) unsigned long long avt_antialiasingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renderer;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)renderAtTime:(double)a0 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 commandBuffer:(id)a1 passDescriptor:(id)a2;
- (void)_renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 updateAtTime:(double)a1;
- (id)_initWithOptions:(id)a0 isPrivateRenderer:(BOOL)a1 privateRendererOwner:(id)a2 clearsOnDraw:(BOOL)a3 context:(void *)a4 renderingAPI:(unsigned long long)a5;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (void)renderer:(id)a0 commandBufferDidCompleteWithError:(id)a1;
- (void)renderer:(id)a0 didFallbackToDefaultTextureForSource:(id)a1 message:(id)a2;
- (void)avatarDidChange;
- (BOOL)enableDepthMask;
- (void)__setAvatar:(id)a0;
- (void)_avtSetupWithOptions:(id)a0;
- (void)_detachAvatarFromRenderer;
- (void)_setAvatar:(id)a0;
- (void)_updatePhysicsWorldForAvatarARScaleAndARMode:(BOOL)a0;
- (id)capturedDepth;
- (void)faceTrackerDidUpdate:(id)a0 withARFrame:(id)a1;
- (void)fadePuppetToWhite:(float)a0;
- (void)setCapturedDepth:(id)a0;
- (void)setEnableDepthMask:(BOOL)a0;
- (void)setEnableDepthMask:(BOOL)a0 withFlippedDepth:(BOOL)a1;
- (void)updateProjectionMatrixForARModeIfNeeded:(struct CGSize { double x0; double x1; })a0;

@end
