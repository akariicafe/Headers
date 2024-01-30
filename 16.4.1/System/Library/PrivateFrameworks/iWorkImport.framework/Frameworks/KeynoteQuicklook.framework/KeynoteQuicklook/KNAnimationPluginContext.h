@class TSDRep, KNAnimatedBuild, NSArray, TSDAnimationSet, TSDMetalTextureRenderer, TSDGLState, NSDictionary, TSDMetalContext, NSString, KNAnimationRandomGenerator;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>

@property (retain, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer;
@property (retain, nonatomic) TSDAnimationSet *animationSet;
@property (retain, nonatomic) NSArray *scaledTextures;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double duration;
@property (nonatomic) double percent;
@property (nonatomic) BOOL isMotionBlurred;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRectOnCanvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (weak, nonatomic) KNAnimatedBuild *animatedBuild;
@property (weak, nonatomic) NSDictionary *buildAttributes;
@property (weak, nonatomic) NSDictionary *transitionAttributes;
@property (weak, nonatomic) NSArray *magicMoveMatches;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL isMovieExport;
@property (retain, nonatomic) TSDGLState *GLState;
@property (retain, nonatomic) TSDMetalContext *metalContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawableFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationFrame;
@property (nonatomic) BOOL isWarmingUp;
@property (weak, nonatomic) TSDRep *rep;
@property (nonatomic) long long rendererType;
@property (nonatomic) BOOL isSceneRenderingEnabled;
@property (readonly, nonatomic) BOOL isBuild;
@property (readonly, nonatomic) BOOL isTransition;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (readonly, nonatomic) BOOL isFrameRenderer;
@property (readonly, nonatomic) BOOL isOpenGLRenderer;
@property (readonly, nonatomic) BOOL isMetalRenderer;
@property (readonly, nonatomic) BOOL willRenderWithLiveTextureSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
