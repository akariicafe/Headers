@class KNLiveVideoInfo, TSDFrameRep, KNLiveVideoLayout, _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper;

@interface KNLiveVideoRep : TSDStyledRep {
    TSDFrameRep *_frameRep;
    _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper *_symbolDrawingHelper;
}

@property (readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
@property (readonly, nonatomic) KNLiveVideoLayout *liveVideoLayout;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;
+ (id)p_sourceSymbolDrawingHelperForSource:(id)a0 reusingSourceSymbolDrawingHelperIfPossible:(id)a1;

- (void)willBeRemoved;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)textureForDescription:(id)a0;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 opacity:(double)a3 withMask:(BOOL)a4 forShadowOrHitTest:(BOOL)a5;
- (void)p_updateFrameRep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_antialiasingDefeatedVideoMaskBoundsInContext:(struct CGContext { } *)a0;
- (void)p_drawOffStateRepresentationInContext:(struct CGContext { } *)a0 forShadowOrHitTest:(BOOL)a1;
- (void)p_drawShadowOrHitTestImageInContext:(struct CGContext { } *)a0;
- (id)p_posterImageProvider;
- (void)p_drawPosterImageWithProvider:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)p_drawSymbolInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_antialiasingDefeatedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)p_effectiveColorSet;
- (BOOL)p_shouldRenderStroke:(id)a0;
- (BOOL)p_shouldRenderFrameStroke;
- (BOOL)p_shouldUseImageTexture;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andOffset:(struct CGPoint { double x0; double x1; } *)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 andRectOnCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 textureDescription:(id)a4 isUsingImageTexture:(BOOL)a5;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (struct CGImage { } *)newTextureMaskImageForViewScale:(double)a0 includeFrameMask:(BOOL)a1 maskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
