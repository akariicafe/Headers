@class TSDShadow, NSString, TSDReflection, CALayer, TSDMutableReflection;

@interface TSDStyledRep : TSDRep <TSDTilingLayerDelegate> {
    struct CGPoint { double x; double y; } mOriginalReflectionLayerPositionInScaledCanvas;
    BOOL mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    BOOL mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    struct { unsigned char shadowInvalid : 1; } mFlags;
}

@property (readonly, nonatomic) CALayer *shadowLayer;
@property (readonly, nonatomic) CALayer *reflectionLayer;
@property (readonly, nonatomic) TSDReflection *reflection;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) TSDShadow *shadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)isInvisible;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)dealloc;
- (BOOL)shouldShowShadow;
- (void)viewScaleDidChange;
- (void)didUpdateLayer:(id)a0;
- (void)processChangedProperty:(int)a0;
- (void)willUpdateEffectLayersForLayer:(id)a0;
- (id)additionalLayersUnderLayer;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRectWithoutEffects;
- (void)createReflectionLayer;
- (void)didUpdateEffectLayersForLayer:(id)a0;
- (void)disposeReflectionLayer;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext { } *)a0 applyingOpacity:(BOOL)a1 reflectionSize:(struct CGSize { double x0; double x1; })a2;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext { } *)a0;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext { } *)a0;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext { } *)a0;
- (void)drawReflectionInContext:(struct CGContext { } *)a0 drawChildren:(BOOL)a1;
- (void)drawReflectionInContext:(struct CGContext { } *)a0 withTransparencyLayer:(BOOL)a1 applyingOpacity:(BOOL)a2 shouldClipGradient:(BOOL)a3 withBlock:(id /* block */)a4;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext { } *)a0 withTransparencyLayer:(BOOL)a1 applyingOpacity:(BOOL)a2 drawChildren:(BOOL)a3;
- (void)drawShadowInContext:(struct CGContext { } *)a0 withChildren:(BOOL)a1 withDrawableOpacity:(BOOL)a2;
- (void)invalidateShadowLayer;
- (struct CGImage { } *)newShadowImageWithSize:(struct CGSize { double x0; double x1; })a0 shadow:(id)a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (struct CGImage { } *)newShadowImageWithSize:(struct CGSize { double x0; double x1; })a0 unflipped:(BOOL)a1 withChildren:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_clipRectInRootForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)p_drawReflectionInContext:(struct CGContext { } *)a0;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext { } *)a0 withTransparencyLayer:(BOOL)a1 applyingOpacity:(BOOL)a2 shouldClipGradient:(BOOL)a3 withBlock:(id /* block */)a4;
- (struct CGImage { } *)p_newReflectionImageWithSize:(struct CGSize { double x0; double x1; })a0 applyOpacity:(BOOL)a1 viewScale:(double)a2 withBlock:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)positionShadowLayer:(id)a0 forShadow:(id)a1 withNaturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reflectionLayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reflectionLayerFrameInRoot;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowReflection;
- (BOOL)shouldShowSelectionHighlight;
- (id)styledInfo;
- (id)styledLayout;
- (id)textureForContext:(id)a0;
- (void)willUpdateLayer:(id)a0;

@end
