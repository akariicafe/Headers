@interface TSDBrushStroke : TSDSmartStroke

@property (class, readonly, nonatomic) BOOL brushStrokeUsesMetal;

+ (Class)mutableClass;
+ (void)p_drawColor:(id)a0 intoContext:(struct CGContext { } *)a1 usingImageAsMask:(struct CGImage { } *)a2 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)p_metalTextureQueue;
+ (id)p_metalShaderQueue;

- (int)cap;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)paintLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 atAngle:(double)a2 withScale:(double)a3 inContext:(struct CGContext { } *)a4 useFastDrawing:(BOOL)a5;
- (id)strokeLineEnd:(id)a0;
- (void)i_setCap:(int)a0;
- (BOOL)supportsPattern;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3 parameterized:(BOOL)a4 shouldReverseDrawOrder:(BOOL)a5;
- (double)horizontalMarginForSwatch;
- (BOOL)canApplyToShapeRenderable;
- (BOOL)needsToExtendJoinsForBoundsCalculation;
- (double)lineEndInsetAdjustment;
- (double)suggestedMinimumLineWidth;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (BOOL)drawsInOneStep;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (id)initWithArchive:(const struct StrokeArchive { } *)a0 unarchiver:(id)a1;
- (void)p_rasterBrushPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 orDirectly:(id)a2 parameterized:(BOOL)a3 shouldReverseDrawOrder:(BOOL)a4 withLayoutOptions:(id)a5;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3 parameterized:(BOOL)a4 shouldReverseDrawOrder:(BOOL)a5 withLayoutOptions:(id)a6;
- (BOOL)p_shouldDrawAsVectorInContext:(struct CGContext { } *)a0;
- (void)p_brushPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 orDirectly:(id)a2 parameterized:(BOOL)a3 drawRasterized:(BOOL)a4 shouldReverseDrawOrder:(BOOL)a5 withLayoutOptions:(id)a6;
- (BOOL)p_isDrawingRasterizedIntoPDFWithContext:(struct CGContext { } *)a0;
- (BOOL)p_isFreehandDrawingStrokeWithFixedTileWidth;
- (void)p_brushPath:(id)a0 withScaling:(struct { double x0; double x1; })a1 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 intoPath:(id)a3 orIntoVector:(void *)a4 sectionIndex:(unsigned long long *)a5 viewScale:(double)a6 withLayoutOptions:(id)a7 currentSubpathIndex:(unsigned long long)a8 cachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a9;
- (void)p_finishMetalRenderInContext:(struct CGContext { } *)a0 orDirectly:(id)a1 pathVertexData:(void *)a2 parameterized:(BOOL)a3 shouldReverseDrawOrder:(BOOL)a4 withLayoutOptions:(id)a5;
- (void)p_brushSection:(id)a0 sectionIndex:(unsigned long long)a1 ontoPath:(id)a2 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 intoPath:(id)a4 orIntoVector:(void *)a5 viewScale:(double)a6 strokeTileLayout:(struct { double x0; double x1; double x2; double x3; })a7 cachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a8;
- (void)p_rasterRenderSection:(id)a0 sectionIndex:(unsigned long long)a1 ontoPath:(id)a2 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 into:(void *)a4 viewScale:(double)a5 strokeTileLayout:(struct { double x0; double x1; double x2; double x3; })a6 cachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a7;
- (long long)p_fastElementPercentage:(double *)a0 forOverallPercentage:(double)a1 onPath:(id)a2 withCachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a3;
- (id)p_metalBrushShaderForPixelFormat:(unsigned long long)a0 andDevice:(id)a1;
- (id)p_metalOpacityShaderForPixelFormat:(unsigned long long)a0 andDevice:(id)a1;
- (id)p_metalTextureForCurrentStrokeAndDevice:(id)a0;
- (BOOL)p_prefersRasterRenderingInContext:(struct CGContext { } *)a0;
- (void)paintPath:(struct CGPath { } *)a0 directlyUsingContext:(id)a1 withLayoutOptions:(id)a2;

@end
