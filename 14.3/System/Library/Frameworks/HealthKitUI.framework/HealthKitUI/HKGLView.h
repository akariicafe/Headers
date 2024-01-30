@class EAGLContext, UIScreen, CADisplayLink;

@interface HKGLView : UIView {
    EAGLContext *_context;
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    BOOL _displayLinkPaused;
    BOOL _viewWillMoveToWindow;
    double _lastUpdateTime;
    unsigned int _latestDrawError;
    int _drawableWidth;
    int _drawableHeight;
    BOOL _shouldDeleteFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _resolveFramebuffer;
    unsigned int _depthRenderbuffer;
    BOOL _contextPushed;
    BOOL _viewSnapshottingActive;
}

@property (nonatomic) BOOL synchronizesWithCA;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float preferredFramesPerSecond;
@property (nonatomic) BOOL use4XMSAA;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic) BOOL shouldBypassApplicationStateChecking;
@property (readonly, nonatomic) double timeSinceLastUpdate;
@property (readonly, nonatomic) BOOL viewIsVisible;

+ (Class)layerClass;
+ (void)clearCachedProgramForVertexShader:(id)a0 fragmentShader:(id)a1;

- (id)initWithContext:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (id)snapshot;
- (void)dealloc;
- (BOOL)_canDrawContent;
- (void)update;
- (void)displayLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (BOOL)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)a0;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)a0;
- (void)layoutSubviews;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_displayLinkFired;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_deleteFramebuffer;
- (void)_updateScreenIfChanged;
- (void)_invalidateLastUpdateTime;
- (void)_updateGLLayerIsAsynchronous;
- (void)performWithContext:(id /* block */)a0;
- (void)_pauseByNotification:(id)a0;
- (void)_resumeByNotification:(id)a0;
- (void)_viewSnapshottingWillBegin;
- (void)_viewSnapshottingDidEnd;
- (BOOL)_isLastUpdateTimeValid;
- (id)_context_generateSnapshot;
- (BOOL)_shouldAllowRendering;
- (void)_context_displayAndPresentFramebuffer:(BOOL)a0;
- (void)_context_checkAndRepairFramebuffer;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(id)a1;
- (void)loadVertexShaderSource:(id)a0 fragmentShaderSource:(id)a1 forProgram:(unsigned int *)a2;
- (void)_context_deleteFramebuffer;
- (BOOL)_context_createFramebuffer;
- (void)_context_prepareFramebuffer:(BOOL *)a0;
- (void)_context_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_context_resolveAndDiscardFramebuffer;
- (BOOL)_context_presentFramebuffer;
- (void)loadVertexShader:(id)a0 fragmentShader:(id)a1 inBundle:(id)a2 forProgram:(unsigned int *)a3 cache:(BOOL)a4;

@end
