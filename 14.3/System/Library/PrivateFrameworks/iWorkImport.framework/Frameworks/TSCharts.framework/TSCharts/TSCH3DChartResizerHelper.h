@class TSCH3DVector, TSCH3DChartBoundsLayout, TSCHChartInfo;

@interface TSCH3DChartResizerHelper : NSObject {
    TSCH3DChartBoundsLayout *mBoundsLayout;
}

@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } originalContainingViewport;
@property (nonatomic) struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;

+ (id)helperWithInfo:(id)a0;
+ (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportForVector:(id)a0;
+ (id)vectorForContainingViewport:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void)invalidateBounds;
- (id)initWithInfo:(id)a0;
- (id)boundsLayoutForScene:(id)a0 mode:(int)a1;
- (id)boundsLayoutResizedForScene:(id)a0 bounds:(const struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } *)a1 resizeStartingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a2 mode:(int)a3 returningResultSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a4;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(const struct ChartProjectedBoundsConverter { struct ChartProjectedBoundsSpaces *x0; float x1; BOOL x2; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x3; } *)a0;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;
- (void)initializeOriginalContainingViewport;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })chartBodySizeByResizingScene:(id)a0 toLayoutSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1 resizeStartingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a2 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a3 resultLayoutSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a4;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })layoutSizeByResizingScene:(id)a0 toChartBodyLayoutSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1 resizeStartingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a2 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } *)a3;

@end
