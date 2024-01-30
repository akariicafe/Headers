@interface TSDPartitionedPartialRep : TSDRep

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)willBeRemoved;
- (BOOL)directlyManagesLayerContent;
- (void)didUpdateLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvas;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)i_queueForTileProvider;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_edgeInsetsForClipping;
- (struct CGImage { } *)p_newImageForCachingBaseRep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_clipRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_convertBaseToNaturalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetCachedPartitionedRendering;

@end
