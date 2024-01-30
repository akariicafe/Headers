@class NSLock, NSString, AVTARMaskRenderer, SCNNode, AVTAvatarEnvironment, AVTAvatar, AVTFaceTracker, SCNTechnique;

@interface AVTRenderer : SCNRenderer <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatarEnvironment *_environment;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    BOOL _arMode;
    BOOL _shouldUpdateFieldOfViewForARMode;
    AVTFaceTracker *_faceTracker;
    float _faceTrackerFieldOfView;
    float _faceTrackerVideoAspectRatio;
    long long _faceTrackerInterfaceOrientation;
    unsigned long long _antialiasingMode;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    BOOL _arMaskRendererHasFlippedDepth;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) BOOL arMode;
@property (nonatomic) BOOL pauseSimulation;
@property (retain, nonatomic) AVTFaceTracker *faceTracker;
@property (copy, nonatomic) NSString *framingMode;
@property (nonatomic) unsigned long long avt_antialiasingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renderer;
+ (id)rendererWithDevice:(id)a0 options:(id)a1;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)faceTrackerDidUpdate:(id)a0 trackingInfo:(id)a1;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (void)renderer:(id)a0 commandBufferDidCompleteWithError:(id)a1;
- (void)renderer:(id)a0 didFallbackToDefaultTextureForSource:(id)a1 message:(id)a2;
- (id)capturedDepth;
- (void)setCapturedDepth:(id)a0;
- (void)_detachAvatarFromRenderer;
- (void)_updateFocal;
- (void)avatarDidChange;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 commandBuffer:(id)a1 passDescriptor:(id)a2;
- (void)_renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 updateAtTime:(double)a1;
- (void)_avtSetupWithOptions:(id)a0;
- (void)_updateAvatarForARMode;
- (void)updateFieldOfViewForARModeIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)renderAtTime:(double)a0 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;
- (void)_setAvatar:(id)a0;
- (void)__setAvatar:(id)a0;
- (BOOL)enableDepthMask;
- (void)setEnableDepthMask:(BOOL)a0;
- (void)setEnableDepthMask:(BOOL)a0 withFlippedDepth:(BOOL)a1;
- (void)fadePuppetToWhite:(float)a0;

@end
