@class NSLock, NSString, AVTARMaskRenderer, SCNNode, AVTAvatarEnvironment, AVTAvatar, AVTFaceTracker, SCNTechnique;
@protocol MTLTexture;

@interface AVTRenderer : SCNRenderer <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatarEnvironment *_environment;
    NSString *_framingMode;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    BOOL _arMode;
    BOOL _enableDepthMask;
    AVTFaceTracker *_faceTracker;
    unsigned long long _antialiasingMode;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) BOOL arMode;
@property (nonatomic) BOOL pauseSimulation;
@property (nonatomic) BOOL enableDepthMask;
@property (retain, nonatomic) AVTFaceTracker *faceTracker;
@property (retain, nonatomic) id<MTLTexture> capturedDepth;
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
- (void)_updateFocal;
- (void)updatePointOfViewFromFramingMode;
- (void)avatarDidChange;
- (void)_renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 updateAtTime:(double)a1;
- (void)_avtSetupWithOptions:(id)a0;
- (void)_updateAvatarForARMode;
- (void)_setAvatar:(id)a0;
- (void)__setAvatar:(id)a0;
- (void)setEnableDepthMask:(BOOL)a0 withFlippedDepth:(BOOL)a1;
- (void)fadePuppetToWhite:(float)a0;

@end
