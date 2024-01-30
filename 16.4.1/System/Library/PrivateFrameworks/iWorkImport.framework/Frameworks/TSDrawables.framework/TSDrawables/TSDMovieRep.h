@class TSDMovieInfo;

@interface TSDMovieRep : TSDMediaRep

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (nonatomic) struct CGImage { } *alternatePosterImage;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void)dealloc;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)movieLayout;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(double)a3 withMask:(BOOL)a4 forShadowOrHitTest:(BOOL)a5;
- (void)updateFromLayout;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andOffset:(struct CGPoint { double x0; double x1; } *)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 andRectOnCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 textureDescription:(id)a4 isUsingImageTexture:(BOOL)a5;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (struct CGImage { } *)newTextureMaskImageForViewScale:(double)a0 includeFrameMask:(BOOL)a1 maskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (BOOL)p_shouldUseImageTexture;
- (id)textureForDescription:(id)a0;
- (void)updateFrameRep;
- (void)p_drawPosterImageInContext:(struct CGContext { } *)a0 forShadowOrHitTest:(BOOL)a1;

@end
