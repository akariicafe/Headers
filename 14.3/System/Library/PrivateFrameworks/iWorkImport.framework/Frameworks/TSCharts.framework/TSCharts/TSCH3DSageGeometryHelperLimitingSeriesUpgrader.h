@class TSCH3DChartResizerHelper, TSCH3DChartBoundsLayout;

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader

@property (readonly, nonatomic) TSCH3DChartResizerHelper *resizerHelper;
@property (readonly, nonatomic) TSCH3DChartBoundsLayout *boundsLayout;

- (void)dealloc;
- (id)sceneResetWithLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oldResizingFrame;
- (id)containingViewportByResizingScene:(id)a0 toResizingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)boundsLayoutByResizingToLayoutSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;

@end
