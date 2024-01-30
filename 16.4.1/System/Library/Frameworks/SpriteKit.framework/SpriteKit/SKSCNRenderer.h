@class SKScene, NSMutableDictionary, SKLabelNode;

@interface SKSCNRenderer : NSObject {
    double _timePreviousUpdate;
    void *_skcRenderer;
    NSMutableDictionary *_viewRenderOptions;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    float _prevBackingScaleFactor;
}

@property (retain, nonatomic) SKScene *scene;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) BOOL showsFPS;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL ignoresSiblingOrder;

+ (id)rendererWithDevice:(id)a0 options:(id)a1;
+ (int)getOpenGLFramebuffer:(id)a0;
+ (id)rendererWithContext:(id)a0 options:(id)a1;
+ (void)restoreDefaultOpenGLState:(id)a0 frameBuffer:(int)a1;
+ (void)setPrefersOpenGL:(BOOL)a0;

- (void)_initialize;
- (id)_scene;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void)dealloc;
- (id)init;
- (void)_update:(double)a0;
- (void).cxx_destruct;
- (double)_fps;
- (void)updateAtTime:(double)a0;
- (void)render:(BOOL)a0;
- (void)setupContext;
- (void /* unknown type, empty encoding */)_getDestBounds;
- (struct { void /* unknown type, empty encoding */ x0[4]; })_getMatrix;
- (id)_getOptions;
- (void /* unknown type, empty encoding */)_getViewport;
- (BOOL)_shouldCenterStats;
- (void)_showAllStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsCoreAnimationFPS;
- (BOOL)_showsCulledNodesInNodeCount;
- (BOOL)_showsGPUStats;
- (BOOL)_showsOutlineInterior;
- (BOOL)_showsSpriteBounds;
- (BOOL)_showsTotalAreaRendered;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (id)initWithSKCRenderer:(void *)a0;
- (void)renderToFramebuffer:(int)a0 shouldClear:(BOOL)a1;
- (void)renderToTexture:(id)a0 commandQueue:(id)a1;
- (void)renderTransition:(id)a0 toFramebuffer:(int)a1 withInputTexture:(unsigned int)a2 outputTexture:(unsigned int)a3 inputTextureSize:(struct CGSize { double x0; double x1; })a4 outputTextureSize:(struct CGSize { double x0; double x1; })a5 time:(float)a6;
- (void)renderTransition:(id)a0 withInputTexture:(unsigned int)a1 outputTexture:(unsigned int)a2 inputTextureSize:(struct CGSize { double x0; double x1; })a3 outputTextureSize:(struct CGSize { double x0; double x1; })a4 time:(float)a5;
- (void)renderTransition:(id)a0 withInputTexture:(id)a1 outputTexture:(id)a2 time:(float)a3 encoder:(id)a4 pass:(id)a5 commandQueue:(id)a6;
- (void)renderWithEncoder:(id)a0 pass:(id)a1 commandQueue:(id)a2;
- (void)setShowsQuadCount:(BOOL)a0;
- (void)setShowsSpriteBounds:(BOOL)a0;
- (void)set_shouldCenterStats:(BOOL)a0;
- (void)set_showsCPUStats:(BOOL)a0;
- (void)set_showsCoreAnimationFPS:(BOOL)a0;
- (void)set_showsCulledNodesInNodeCount:(BOOL)a0;
- (void)set_showsGPUStats:(BOOL)a0;
- (void)set_showsOutlineInterior:(BOOL)a0;
- (void)set_showsSpriteBounds:(BOOL)a0;
- (void)set_showsTotalAreaRendered:(BOOL)a0;
- (void)settingsForTransition:(id)a0 atTime:(double)a1 renderIncomingToTexture:(BOOL *)a2 renderOutgoingToTexture:(BOOL *)a3 renderIncomingToScreen:(BOOL *)a4 renderOutgoingToScreen:(BOOL *)a5;
- (BOOL)showsQuadCount;
- (BOOL)showsSpriteBounds;

@end
