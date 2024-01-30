@class TSDShadow, NSString, TSDReflection, TSDStyledInfo, TSDStyledLayout;

@interface TSDStyledRep : TSDRep <CALayerDelegate> {
    struct { unsigned char shadowInvalid : 1; } mFlags;
}

@property (readonly, nonatomic) TSDReflection *reflection;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) TSDShadow *shadow;
@property (readonly, nonatomic) TSDStyledInfo *styledInfo;
@property (readonly, nonatomic) TSDStyledLayout *styledLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } reflectionFrameInRootForClipping;
@property (readonly, copy, nonatomic) id /* block */ blockToExcludeCaptionsAndDescendantsOfCaptions;
@property (readonly, nonatomic) BOOL shouldShowShadow;
@property (readonly, nonatomic) BOOL shouldShowReflection;
@property (readonly, nonatomic) BOOL isInvisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)a0;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext { } *)a0 applyingOpacity:(BOOL)a1 reflectionSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRectWithoutEffects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext { } *)a0 withTransparencyLayer:(BOOL)a1 applyingOpacity:(BOOL)a2 drawChildren:(BOOL)a3;
- (void)p_drawReflectionInContext:(struct CGContext { } *)a0;
- (struct CGImage { } *)newShadowImageWithSize:(struct CGSize { double x0; double x1; })a0 unflipped:(BOOL)a1 withChildren:(BOOL)a2;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext { } *)a0;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext { } *)a0;
- (struct CGImage { } *)newShadowImageWithSize:(struct CGSize { double x0; double x1; })a0 shadow:(id)a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext { } *)a0 withTransparencyLayer:(BOOL)a1 applyingOpacity:(BOOL)a2 shouldClipGradient:(BOOL)a3 withBlock:(id /* block */)a4;
- (struct CGImage { } *)p_newReflectionImageWithSize:(struct CGSize { double x0; double x1; })a0 applyOpacity:(BOOL)a1 viewScale:(double)a2 withBlock:(id /* block */)a3;
- (void)drawReflectionInContext:(struct CGContext { } *)a0 withTransparencyLayer:(BOOL)a1 applyingOpacity:(BOOL)a2 shouldClipGradient:(BOOL)a3 withBlock:(id /* block */)a4;
- (void)drawShadowInContext:(struct CGContext { } *)a0 withChildren:(BOOL)a1 withDrawableOpacity:(BOOL)a2;
- (void)drawReflectionInContext:(struct CGContext { } *)a0 drawChildren:(BOOL)a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext { } *)a0;
- (id)textureForDescription:(id)a0;
- (void)setTextureAttributes:(id)a0 textureBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokeBoundsWithOptions:(unsigned long long)a0 fallbackBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 includeShadow:(BOOL)a2 includeReflection:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_baseReflectionFrameInRootForClipping;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_reflectionRenderableFrameInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_clipRectInRootForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 includeShadow:(BOOL)a1 includeReflection:(BOOL)a2;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andOffset:(struct CGPoint { double x0; double x1; } *)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 andRectOnCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 textureDescription:(id)a4 isUsingImageTexture:(BOOL)a5;
- (struct CGImage { } *)newFrameMaskForViewScale:(double)a0 frameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
