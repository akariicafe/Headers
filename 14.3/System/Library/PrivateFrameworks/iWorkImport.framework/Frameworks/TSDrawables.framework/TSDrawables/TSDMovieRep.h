@class TSDMovieInfo, TSDFrameRep;

@interface TSDMovieRep : TSDMediaRep {
    TSDFrameRep *_reflectionFrameRep;
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (nonatomic) struct CGImage { } *alternatePosterImage;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateFromLayout;
- (void)i_updateFrameRep;
- (id)movieLayout;
- (void)p_updateReflectionFrameRep;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(double)a3 withMask:(BOOL)a4 forShadowOrHitTest:(BOOL)a5;
- (id)textureForDescription:(id)a0;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andOffset:(struct CGPoint { double x0; double x1; } *)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 andRectOnCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 textureDescription:(id)a4 isUsingImageTexture:(BOOL)a5;
- (struct CGImage { } *)newFrameMaskForViewScale:(double)a0 frameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)p_drawPosterImageInContext:(struct CGContext { } *)a0 forShadowOrHitTest:(BOOL)a1;
- (BOOL)p_shouldUseImageTexture;

@end
