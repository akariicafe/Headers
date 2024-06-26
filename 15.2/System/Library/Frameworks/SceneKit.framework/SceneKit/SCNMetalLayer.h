@class NSString, SCNScene, SCNNode, AVAudioEnvironmentNode, SCNRenderer, SKScene, SCNDisplayLink, AVAudioEngine, MTLRenderPassDescriptor, SCNTechnique, SCNJitterer;
@protocol MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice, MTLCommandQueue;

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport> {
    SCNJitterer *_jitterer;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    double _lastUpdate;
    double _lastRenderedTime;
    BOOL _drawForJittering;
    BOOL _rendersIntoMaterial;
}

@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) BOOL syncTimeWithCoreAnimation;
@property (nonatomic) double sceneTime;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (nonatomic) BOOL usesReverseZ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) SCNTechnique *technique;

+ (id)_kvoKeysForwardedToRenderer;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)pauseDisplayLink;
- (void)_jitterRedisplay;
- (void)commonInit;
- (id)rendererOptions;
- (void)projectPoints:(struct SCNVector3 { float x0; float x1; float x2; } *)a0 count:(unsigned long long)a1;
- (id)initWithLayer:(id)a0;
- (struct SCNVector3 { float x0; float x1; float x2; })projectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (id)displayLink;
- (id)nodesInsideFrustumWithPointOfView:(id)a0;
- (void)resumeDisplayLink;
- (void)_cancelJitterRedisplay;
- (BOOL)_isGLLayerBacked;
- (BOOL)_supportsJitteringSyncRedraw;
- (long long)preferredFramesPerSecond;
- (id)scn_backingLayer;
- (BOOL)prepareObject:(id)a0 shouldAbortBlock:(id /* block */)a1;
- (void)stop:(id)a0;
- (void)setCurrentTime:(double)a0;
- (void)set_showsAuthoringEnvironment:(BOOL)a0;
- (id)renderer;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0 toPoint:(struct SCNVector3 { float x0; float x1; float x2; })a1 options:(id)a2;
- (id)init;
- (void)SCN_displayLinkCallback:(double)a0;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)pause;
- (BOOL)_showsAuthoringEnvironment;
- (void)_systemTimeAnimationStarted:(id)a0;
- (BOOL)isNodeInsideFrustum:(id)a0 withPointOfView:(id)a1;
- (struct SCNVector4 { float x0; float x1; float x2; float x3; })_viewport;
- (BOOL)_canJitter;
- (double)currentTime;
- (void)_sceneDidUpdate:(id)a0;
- (id)layer;
- (void)setRenderer:(id)a0;
- (void)play;
- (struct SCNVector3 { float x0; float x1; float x2; })unprojectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)setNeedsDisplay;
- (BOOL)canDrawConcurrently;
- (void)play:(id)a0;
- (BOOL)rendersIntoMaterial;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (id)contentLayer;
- (BOOL)scn_inLiveResize;
- (void)setBackgroundColor:(struct CGColor { } *)a0;
- (void)display;
- (void)pause:(id)a0;
- (id)pointOfCulling;
- (id)_authoringEnvironment;
- (void)_drawAtTime:(double)a0;
- (void)prepareObjects:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setPointOfCulling:(id)a0;
- (void)presentScene:(id)a0 withTransition:(id)a1 incomingPointOfView:(id)a2 completionHandler:(id /* block */)a3;
- (void)stop;
- (void)setRendersIntoMaterial:(BOOL)a0;
- (void)setPreferredFramesPerSecond:(long long)a0;

@end
