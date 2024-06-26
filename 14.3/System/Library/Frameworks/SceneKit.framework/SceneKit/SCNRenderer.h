@class AVAudioEngine, EAGLContext, MTLRenderPassDescriptor, SCNMTLRenderContext, NSObject, SCNNode, SCNRecursiveLock, __SKSCNRenderer, SCNAuthoringEnvironment, AVAudioEnvironmentNode, UIColor, NSString, SCNTechnique, NSArray, SKScene, SCNScene, SCNRendererTransitionContext;
@protocol SCNSceneRenderer, MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice, MTLTexture, MTLCommandQueue, OS_dispatch_queue;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport> {
    SCNScene *_scene;
    SCNNode *_pointOfView;
    SCNNode *_pointOfCulling;
    SCNRecursiveLock *_lock;
    NSObject<OS_dispatch_queue> *__renderingQueue;
    unsigned long long __antialiasingMode;
    unsigned long long __preparePixelFormat;
    struct { struct __C3DFramebuffer *frameBuffer; struct __C3DFramebuffer *multisamplingFrameBuffer; struct CGSize { double width; double height; } drawableSize; } _framebufferInfo;
    id<MTLTexture> _mtlTexture;
    NSArray *_viewPoints;
    BOOL _pointOfViewWasSet;
    unsigned char _shouldDeleteFramebuffer : 1;
    unsigned char _rendersContinuously : 1;
    unsigned char _isPrivateRenderer : 1;
    unsigned char _isViewPrivateRenderer : 1;
    unsigned char _renderingSnapshot : 1;
    unsigned char _renderingPrepare : 1;
    unsigned char _autoUpdate : 1;
    unsigned char _disableLinearRendering : 1;
    double _currentSceneTime;
    double _currentSystemTime;
    double _deltaTime;
    double _forceSystemTime;
    double _lastSystemTime;
    double __nextFrameTime;
    SCNRendererTransitionContext *_transitionContext;
    BOOL _playing;
    BOOL _loops;
    BOOL _isAnimating;
    unsigned int _adaptativeState0;
    unsigned int _adaptativeEndFrame;
    unsigned int _adaptativeTechniqueTimeStamp;
    id _delegate;
    struct __C3DEngineContext { } *_engineContext;
    unsigned long long _renderingAPI;
    struct SCNVector4 { float x; float y; float z; float w; } __viewport;
    double __aspectRatio;
    void /* unknown type, empty encoding */ __drawableSafeAreaInsets;
    EAGLContext *_glContext;
    SCNMTLRenderContext *_renderContext;
    unsigned char _jitteringEnabled : 1;
    unsigned char _temporalAntialiasingEnabled : 1;
    unsigned char _frozen : 1;
    unsigned char _shouldForwardSceneRendererDelegationMessagesToSelf : 1;
    unsigned char _shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner : 1;
    struct { unsigned char supportsUpdate : 1; unsigned char supportsDidApplyAnimations : 1; unsigned char supportsDidSimulatePhysics : 1; unsigned char supportsDidApplyConstraints : 1; unsigned char supportsWillRender : 1; unsigned char supportsDidRender : 1; unsigned char supportsInputTime : 1; unsigned char supportsReadSubdivCache : 1; unsigned char supportsWriteSubdivCache : 1; } _selfDelegationConformance;
    struct { unsigned char supportsUpdate : 1; unsigned char supportsDidApplyAnimations : 1; unsigned char supportsDidSimulatePhysics : 1; unsigned char supportsDidApplyConstraints : 1; unsigned char supportsWillRender : 1; unsigned char supportsDidRender : 1; unsigned char supportsInputTime : 1; unsigned char supportsReadSubdivCache : 1; unsigned char supportsWriteSubdivCache : 1; } _privateRendererOwnerDelegationConformance;
    struct { unsigned char supportsUpdate : 1; unsigned char supportsDidApplyAnimations : 1; unsigned char supportsDidSimulatePhysics : 1; unsigned char supportsDidApplyConstraints : 1; unsigned char supportsWillRender : 1; unsigned char supportsDidRender : 1; unsigned char supportsInputTime : 1; unsigned char supportsReadSubdivCache : 1; unsigned char supportsWriteSubdivCache : 1; } _delegationConformance;
    UIColor *_backgroundColor;
    struct C3DColor4 { union { float rgba[4]; struct { float r; float g; float b; float a; } ; void /* unknown type, empty encoding */ simd; } ; } _c3dBackgroundColor;
    SCNRenderer *_preloadRenderer;
    id<SCNSceneRenderer> _privateRendererOwner;
    SCNTechnique *_technique;
    SCNRenderer *_snapshotRenderer;
    __SKSCNRenderer *_overlayRenderer;
    id _overlayScene;
    BOOL _disableOverlays;
    float _contentScaleFactor;
    BOOL _isRunningInExtension;
    SCNAuthoringEnvironment *_authoringEnvironment;
    unsigned long long _debugOptions;
    BOOL _showStatistics;
    BOOL _showAuthoringEnvironment;
    double _statisticsTimeStamp;
}

@property (retain, nonatomic) SCNScene *scene;
@property (readonly, nonatomic) double nextFrameTime;
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

+ (id)rendererWithDevice:(id)a0 options:(id)a1;
+ (id)rendererWithContext:(id)a0 options:(id)a1;

- (void)_stop;
- (void)unlock;
- (double)_aspectRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport;
- (void)render;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0 toPoint:(struct SCNVector3 { float x0; float x1; float x2; })a1 options:(id)a2;
- (void)lock;
- (void)presentScene:(id)a0 withTransition:(id)a1 incomingPointOfView:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)setPointOfCulling:(id)a0;
- (double)_nextFrameTime;
- (id)nodesInsideFrustumWithPointOfView:(id)a0;
- (void)setFrozen:(BOOL)a0;
- (id)metalDevice;
- (void)_endFrame;
- (BOOL)isNodeInsideFrustum:(id)a0 withPointOfView:(id)a1;
- (void)_play;
- (void)dealloc;
- (void)setCurrentTime:(double)a0;
- (void)_draw;
- (struct SCNVector3 { float x0; float x1; float x2; })projectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (BOOL)_showsAuthoringEnvironment;
- (BOOL)frozen;
- (struct SCNVector4 { float x0; float x1; float x2; float x3; })_viewport;
- (void)_update:(struct __C3DScene { } *)a0;
- (unsigned long long)_sampleCount;
- (void)prepareObjects:(id)a0 withCompletionHandler:(id /* block */)a1;
- (double)currentTime;
- (void)setBackgroundColor:(id)a0;
- (void)setContext:(id)a0;
- (double)_contentsScaleFactor;
- (struct SCNVector3 { float x0; float x1; float x2; })unprojectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)_drawAtTime:(double)a0;
- (void)set_showsAuthoringEnvironment:(BOOL)a0;
- (id)_renderingQueue;
- (id)pointOfCulling;
- (BOOL)prepareObject:(id)a0 shouldAbortBlock:(id /* block */)a1;
- (id)backgroundColor;
- (struct CGSize { double x0; double x1; })_backingSize;
- (void)_setInterfaceOrientation:(long long)a0;
- (void)_beginFrame;
- (struct CGImage { } *)createSnapshot:(double)a0;
- (id)_authoringEnvironment;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (void)_pause;
- (id)metalLayer;
- (id)currentCommandBuffer;
- (void)updateAtTime:(double)a0;
- (id)snapshotAtTime:(double)a0 withSize:(struct CGSize { double x0; double x1; })a1 antialiasingMode:(unsigned long long)a2;
- (void)set_enableARMode:(BOOL)a0;
- (void)set_wantsSceneRendererDelegationMessages:(BOOL)a0;
- (void)_UIOrientationDidChangeNotification:(id)a0;
- (void)setRendersContinuously:(BOOL)a0;
- (void)set_superSamplingFactor:(double)a0;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 commandBuffer:(id)a1 passDescriptor:(id)a2;
- (unsigned long long)_antialiasingMode;
- (BOOL)renderMovieToURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 antialiasingMode:(unsigned long long)a2 attributes:(id)a3 error:(id *)a4;
- (void)_presentFramebuffer;
- (const void *)__CFObject;
- (void)_jitterAtStep:(unsigned long long)a0 updateMainFramebuffer:(BOOL)a1 redisplay:(BOOL)a2 jitterer:(id)a3;
- (struct __C3DEngineContext { } *)_engineContext;
- (double)_superSamplingFactor;
- (struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })_screenTransform;
- (BOOL)_disableLinearRendering;
- (BOOL)_enableARMode;
- (BOOL)_shouldDelegateARCompositing;
- (void)set_antialiasingMode:(unsigned long long)a0;
- (void)_updateEngineCallbacks;
- (id)_initWithOptions:(id)a0 isPrivateRenderer:(BOOL)a1 privateRendererOwner:(id)a2 clearsOnDraw:(BOOL)a3 context:(void *)a4 renderingAPI:(unsigned long long)a5;
- (void /* unknown type, empty encoding */)adjustViewportForRendering:(SEL)a0;
- (void)_invalidateFramebuffer;
- (id)_prepareSKRenderer;
- (void)_prepareRenderTarget;
- (void)_deleteGLFramebuffer;
- (void)_createPrepareFramebufferIfNeeded;
- (void)_createOffscreenFramebufferIfNeeded;
- (void)_prepareGLRenderTarget;
- (unsigned long long)_preparePixelFormat;
- (struct SCNVector3 { float x0; float x1; float x2; })_projectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0 viewport:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a1;
- (struct SCNVector3 { float x0; float x1; float x2; })_unprojectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0 viewport:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a1;
- (long long)_getFrameIndex;
- (void)_prepareForTransition:(id)a0 outgoingScene:(id)a1 outgoingPointOfView:(id)a2 completionHandler:(id /* block */)a3;
- (id)_defaultPOVForScene:(id)a0;
- (void)_c3dBackgroundColorDidChange;
- (id)_setupSKRendererIfNeeded;
- (void)_overlaysDidUpdate:(id)a0;
- (BOOL)_installContext;
- (void)set_preparePixelFormat:(unsigned long long)a0;
- (BOOL)_collectCompilationErrors;
- (id)_renderContextMetal;
- (BOOL)_preparePreloadRenderer:(id)a0;
- (BOOL)_prepareObject:(id)a0 shouldAbortBlock:(id /* block */)a1;
- (void)_releasePreloadRenderer;
- (BOOL)_preloadResource:(id)a0 abortHandler:(id /* block */)a1;
- (void)_setSceneTime:(double)a0;
- (void)updateCurrentTimeIfPlayingWithSystemTime:(double)a0;
- (double)_systemTime;
- (void)_updateSystemTimeAndDeltaTimeWithCurrentTime:(double)a0;
- (void)_updateWithSystemTime:(double)a0;
- (BOOL)_needsRepetitiveRedraw;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 viewport:(struct CGSize { double x0; double x1; })a1 options:(id)a2;
- (BOOL)_isNodeInsideFrustum:(id)a0 withPointOfView:(id)a1 viewport:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a2;
- (id)_nodesInsideFrustumWithPointOfView:(id)a0 viewport:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a1;
- (void)setupAuthoringEnvironment;
- (void)_resolveAndDiscardGL;
- (id)_compilationErrors;
- (void)_reloadDebugOptions;
- (void)_renderSceneWithEngineContext:(struct __C3DEngineContext { } *)a0 sceneTime:(double)a1;
- (double)_computeNextFrameTime;
- (void)set_nextFrameTime:(double)a0;
- (void)updateAndDrawStatisticsIfNeeded;
- (BOOL)_needsRedrawAsap;
- (BOOL)_drawSceneWithNewRenderer:(struct __C3DScene { } *)a0;
- (BOOL)_drawSceneWithLegacyRenderer:(struct __C3DScene { } *)a0;
- (void)_clearBackBuffer;
- (void)set_systemTime:(double)a0;
- (void)set_deltaTime:(double)a0;
- (void)_installViewport;
- (void)set_viewport:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a0;
- (void)renderAtTime:(double)a0;
- (void)_drawScene:(struct __C3DScene { } *)a0;
- (id)MTLTexture;
- (void)_updatePointOfView;
- (void)_renderAtTime:(double)a0;
- (void)_renderAtTime:(double)a0 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 encoder:(id)a2 passDescriptor:(id)a3 commandQueue:(id)a4 commandBuffer:(id)a5;
- (void)renderWithCommandBuffer:(id)a0 viewPoints:(id)a1;
- (void)_installGLContextAndSetViewport;
- (struct CGImage { } *)_createSnapshotAtTime:(double)a0 withSize:(struct CGSize { double x0; double x1; })a1 antialiasingMode:(unsigned long long)a2;
- (void)_setBackingSize:(struct CGSize { double x0; double x1; })a0;
- (id)snapshotRendererWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_computedLightingEnvironmentMapsPath;
- (void)set_computedLightingEnvironmentMapsPath:(id)a0;
- (void)_setupOffscreenRendererWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)autoAdjustCamera;
- (void)setAutoAdjustCamera:(BOOL)a0;
- (void)set_screenTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (void)set_collectCompilationErrors:(BOOL)a0;
- (void)__setTransitionContext:(id)a0;
- (void)updateProbes:(id)a0 atTime:(double)a1;
- (void)renderAtTime:(double)a0 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;
- (void)_interfaceOrientationDidChange;
- (void)_setContentsScaleFactor:(double)a0;
- (void)set_aspectRatio:(double)a0;
- (struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; unsigned int x7; struct __C3DTexture *x8; struct __C3DStack *x9; void *x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; struct __CFDictionary *x16; unsigned int x17; struct __CFDictionary *x18; struct __CFDictionary *x19; struct __CFDictionary *x20; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x21; void *x22; long long x23; struct __C3DFXProgramObject *x24; struct __C3DEngineStats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; double x56; unsigned int x57; double x58; unsigned int x59; double x60; double x61; double x62; double x63; double x64[60]; unsigned int x65; double x66; double x67; } x25; struct Cache { unsigned int x0[8]; unsigned int x1; int x2; struct __C3DBlendStates *x3; unsigned int x4; struct __C3DRasterizerStates *x5; struct __C3DMesh *x6; struct __C3DMeshElement *x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; void *x12; int x13; int x14; } x26; struct { unsigned int x0[2]; int x1[5]; struct { int x0; unsigned int x1; unsigned int x2; } x2[14]; unsigned int x3[14]; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; } x27; struct VolatileObject { struct __C3DArray *x0; unsigned int x1; unsigned int x2; struct __CFArray *x3; } x28[2]; struct __C3DArray *x29; unsigned int x30; struct __CFDictionary *x31; } *)_rendererContextGL;
- (void)_projectPoints:(struct SCNVector3 { float x0; float x1; float x2; } *)a0 count:(unsigned long long)a1 viewport:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a2;
- (void)_didRenderScene:(id)a0;
- (void)_willRenderScene:(id)a0;
- (id)_readSubdivCacheForHash:(id)a0;
- (void)_writeSubdivCacheForHash:(id)a0 dataProvider:(id /* block */)a1;
- (void)setScene:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolvedBackgroundColorDidChange;
- (BOOL)disableOverlays;
- (void)setDisableOverlays:(BOOL)a0;
- (id)_copyPassDescription;
- (id)_copyRenderGraphDescription;
- (void)_renderGraphFrameRecordingAtPath:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_recordWithoutExecute;
- (void)set_recordWithoutExecute:(BOOL)a0;
- (id)programWithNode:(id)a0 withMaterial:(id)a1;
- (BOOL)_wantsSceneRendererDelegationMessages;
- (BOOL)_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner;
- (void)set_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner:(BOOL)a0;
- (void)_drawOverlaySceneAtTime:(double)a0;
- (BOOL)jitteringEnabled;
- (BOOL)temporalAntialiasingEnabled;
- (id)_copyPerformanceStatistics;
- (void)_displayLinkStatsTick;
- (void)_displayLinkStatsTack;
- (void)_runningInExtension;
- (BOOL)_enablesDeferredShading;
- (void)set_enablesDeferredShading:(BOOL)a0;
- (void)set_disableLinearRendering:(BOOL)a0;
- (void)set_shouldDelegateARCompositing:(BOOL)a0;
- (void /* unknown type, empty encoding */)_drawableSafeAreaInsets;
- (void)set_drawableSafeAreaInsets:(SEL)a0;
- (void)_drawWithJitteringPresentationMode;
- (void)renderAtTime:(double)a0 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 encoder:(id)a2 passDescriptor:(id)a3 commandQueue:(id)a4;
- (void)renderAtTime:(double)a0 commandBuffer:(id)a1 viewPoints:(id)a2;
- (void)renderWithViewpoints:(id)a0 events:(id)a1;
- (id)snapshotAtTime:(double)a0;
- (void)_updateProbes:(id)a0 withProgress:(id)a1;
- (struct CGImage { } *)copySnapshotWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initOffscreenRendererWithSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (id)privateRendererOwner;

@end
