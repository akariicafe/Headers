@class SKNode, NTKFaceEditView, NSArray, CLKDevice, SKTexture, SKSpriteNode, NTKVariantNode, NSMutableArray, UIColor;

@interface NTKAnalogScene : SKScene {
    SKNode *_root;
    SKNode *_faceChild;
    SKNode *_backgroundChild;
    UIColor *_faceColor;
    SKTexture *_faceCircleTexture;
    SKSpriteNode *_faceCircleSprite;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) SKNode *face;
@property (readonly, nonatomic) SKNode *background;
@property (readonly, nonatomic) SKNode *circle;
@property (retain) UIColor *faceColor;
@property (readonly, nonatomic) NSMutableArray *variantNodes;
@property (retain, nonatomic) NTKVariantNode *currentVariantNode;
@property (readonly, nonatomic) unsigned long long currentDensity;
@property (nonatomic) BOOL showContentForUnadornedSnapshot;
@property (readonly, nonatomic) long long dataMode;
@property (retain, nonatomic) NTKFaceEditView *editView;
@property (readonly) NSArray *activeVariantNodes;
@property (retain, nonatomic) UIColor *tickColor;
@property (retain, nonatomic) UIColor *alternativeTickColor;
@property (nonatomic) BOOL shouldRasterizeBackground;
@property (nonatomic) BOOL shouldHideVariantsBelowCurrent;

+ (id)sceneWithSize:(struct CGSize { double x0; double x1; })a0 forDevice:(id)a1;

- (void)didMoveToView:(id)a0;
- (void)setBackgroundAlpha:(double)a0;
- (void).cxx_destruct;
- (void)setDensity:(unsigned long long)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forDevice:(id)a1;
- (id)addVariantNodeWithElements:(id)a0;
- (id)scrubbingObscuredCollectionNodes;
- (void)setZoomFraction:(double)a0 diameter:(double)a1;
- (id)displayTime;
- (void)startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_displayZoomScale:(double)a0 fraction:(double)a1;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2 withScale:(double)a3;
- (id)auxiliaryScrubbingObscuredNodes;
- (unsigned long long)scrubbingObscured12ElementBottomIndex;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3;
- (void)_applyDataMode:(long long)a0;
- (void)addNodeToFace:(id)a0;
- (void)addNodeToBackground:(id)a0;
- (BOOL)_canRasterize;
- (id)addVariantNodeWithElements:(id)a0 parent:(id)a1 hidden:(BOOL)a2;
- (void)_updateTickColors;
- (void)invalidateRasterization;
- (void)enumerateTickCollectionNodes:(id /* block */)a0;
- (id)faceCircleSprite;
- (void)_restoreToFullScreen;
- (void)forEachActiveVariant:(id /* block */)a0;
- (void)_setObscuredContentHiddenForScrubbing:(BOOL)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *)a0 toNodes:(id)a1;
- (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x0; double x1; } x0; long long x1; long long x2; } *)a0 withCenter:(struct CGPoint { double x0; double x1; })a1 toNodes:(id)a2;
- (void)preRender;
- (id)handColor;

@end
