@class NSArray, CALayer, TSDFrame, TSDBitmapImageProvider;

@interface TSDFrameRep : NSObject {
    NSArray *_images;
    NSArray *_masks;
    TSDBitmapImageProvider *_adornment;
    CALayer *_maskLayer;
    BOOL _shouldEnableBlendMode;
    BOOL _missingImageProviders;
}

@property (readonly, nonatomic) TSDFrame *frame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applyMaskForRectWithCoverage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContext:(struct CGContext { } *)a1;
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext { } *)a0;
- (void)frameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withTotalScale:(double)a2;
- (id)initWithTSDFrame:(id)a0;
- (void)p_drawFrameIntoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withImages:(id)a2 atViewScale:(double)a3 isMask:(BOOL)a4;
- (void)p_drawTiles:(id)a0 inContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 start:(double)a3 end:(double)a4 vertical:(BOOL)a5;
- (struct CGImage { } *)p_newRenderedFrameForMask:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1 forCALayer:(BOOL)a2 viewScale:(double)a3;
- (struct CGImage { } *)newFrameForMask:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1 forCALayer:(BOOL)a2 viewScale:(double)a3;
- (BOOL)p_shouldRender;
- (BOOL)p_shouldRenderForRectWithCoverage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)p_shouldRenderForRectWithoutCoverage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)p_willRenderForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
