@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke {
    NSString *_frameName;
    double _leftWidth;
    double _rightWidth;
    double _topHeight;
    double _bottomHeight;
    struct CGSize { double width; double height; } _adornmentSize;
}

@property (readonly, nonatomic) NSString *archivableFrameName;
@property (readonly, nonatomic) NSString *frameName;
@property (readonly, nonatomic) double assetScale;
@property (readonly, nonatomic) TSDFrameSpec *frameSpec;
@property (readonly, nonatomic) BOOL hasMask;
@property (readonly, nonatomic) double minimumAssetScale;

+ (Class)mutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)shouldRender;
- (BOOL)isFrame;
- (BOOL)isNearlyWhite;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)supportsLineOptions;
- (BOOL)supportsPattern;
- (BOOL)isNullStroke;
- (BOOL)canApplyDirectlyToRepRenderable;
- (BOOL)canApplyToShapeRenderable;
- (struct _TSDStrokeOutsets { double x0; double x1; double x2; double x3; })outsets;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (BOOL)drawsInOneStep;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrameName:(id)a0;
- (BOOL)shouldRenderForSizeIncludingCoverage:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1 archivableFrameName:(id)a2;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1;
- (id)initWithFrameSpec:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_adornmentRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })p_minimumRenderedSize;
- (void)paintPath:(const struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (double)i_bottomHeight;
- (BOOL)i_willRenderForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_uncoveredRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 whenStrokingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)equivalentStrokeWidth;

@end
