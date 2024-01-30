@class TSDFrameSpec, NSString;

@interface TSDFrame : TSDStroke {
    NSString *mFrameName;
    BOOL mScaledSizesValid;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize { double width; double height; } mAdornmentSize;
}

@property (readonly, nonatomic) double assetScale;
@property (readonly, nonatomic) TSDFrameSpec *frameSpec;

+ (Class)mutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)frameName;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)shouldRender;
- (BOOL)isFrame;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (BOOL)supportsLineOptions;
- (BOOL)supportsPattern;
- (BOOL)isNullStroke;
- (struct _TSDStrokeOutsets { double x0; double x1; double x2; double x3; })outsets;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (BOOL)drawsInOneStep;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrameName:(id)a0;
- (double)minimumAssetScale;
- (BOOL)shouldRenderForSizeIncludingCoverage:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canApplyToCAShapeLayer;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1 archivableFrameName:(id)a2;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1;
- (id)initWithFrameSpec:(id)a0;
- (id)archivableFrameName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_adornmentRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })p_minimumRenderedSize;
- (BOOL)canApplyDirectlyToRepCALayer;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (double)i_bottomHeight;
- (BOOL)i_willRenderForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
