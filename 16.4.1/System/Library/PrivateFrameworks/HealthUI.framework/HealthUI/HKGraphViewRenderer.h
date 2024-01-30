@class HKAxis, UIView, NSArray, HKGraphViewRendererVirtualMarginConfiguration, HKValueRange, HKGraphViewSelectionStyle, NSMutableArray, HKGraphViewRendererSeriesConfiguration, UIColor;
@protocol HKGraphRenderer;

@interface HKGraphViewRenderer : NSObject <HKSeriesRenderingDelegate>

@property (readonly, nonatomic) HKGraphViewRendererSeriesConfiguration *seriesConfiguration;
@property (readonly, nonatomic) UIView<HKGraphRenderer> *renderingView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullChartRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } insetChartRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } insetDataArea;
@property (readonly, nonatomic) double rightHandInactiveArea;
@property (readonly, nonatomic) double zoomScale;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) long long xAxisDateZoom;
@property (readonly, nonatomic) BOOL drawingToTile;
@property (readonly, nonatomic) long long tileColumn;
@property (readonly, nonatomic) BOOL drawingDuringScrolling;
@property (readonly, nonatomic) BOOL drawingDuringAutoscale;
@property (readonly, nonatomic) HKAxis *xAxis;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } xAxisCoordinateTransform;
@property (readonly, nonatomic) HKGraphViewRendererVirtualMarginConfiguration *virtualMargins;
@property (readonly, nonatomic) UIColor *outlineColor;
@property (readonly, nonatomic) UIColor *tileBackgroundColor;
@property (readonly, nonatomic) double topBaselineY;
@property (readonly, nonatomic) double bottomBaselineY;
@property (readonly, nonatomic) UIColor *selectionLineColor;
@property (readonly, nonatomic) HKGraphViewSelectionStyle *selectionLineStyle;
@property (readonly, nonatomic) BOOL disableXAxis;
@property (readonly, nonatomic) double currentXAxisHeight;
@property (readonly, nonatomic) NSArray *gridlineRanges;
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeActive;
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeCadence;
@property (readonly, nonatomic) HKValueRange *actualVisibleRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingAreaRect;
@property (readonly, nonatomic) BOOL chartMeasuringStartupTime;
@property (readonly, nonatomic) long long postUpdates;
@property (readonly, nonatomic) double postXAxisHeight;
@property (readonly, nonatomic) NSMutableArray *postOverlayData;
@property (readonly, nonatomic) NSMutableArray *postSelectionPoints;

- (void).cxx_destruct;
- (void)_clearBackgroundInContext:(struct CGContext { } *)a0;
- (void)_renderBaselineWithContext:(struct CGContext { } *)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_renderDataAreaDividersWithContext:(struct CGContext { } *)a0;
- (void)_renderSelectionLineWithContext:(struct CGContext { } *)a0;
- (void)_renderSeriesWithContext:(struct CGContext { } *)a0 secondaryRenderContext:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_renderVirtualMarginGridLines:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (void)_renderVirtualMarginInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 marginStyle:(long long)a2;
- (void)_renderVirtualMarginsWithContext:(struct CGContext { } *)a0;
- (void)_renderXAxisGridlinesInContext:(struct CGContext { } *)a0 withBlendMode:(int)a1;
- (void)_renderXAxisLabelAndGridsNeedsNewRendererInContext:(struct CGContext { } *)a0;
- (double)_renderXAxisLabelsInContext:(struct CGContext { } *)a0;
- (void)_renderYAxisGridlinesInContext:(struct CGContext { } *)a0 renderingView:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withBlendMode:(int)a3 zoomScale:(double)a4 contentOffset:(struct CGPoint { double x0; double x1; })a5;
- (id)axisAnnotationDelegateForSeries:(id)a0;
- (id)initWithRendererSeries:(id)a0 renderingView:(id)a1 fullChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 insetChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 insetDataArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 rightHandInactiveArea:(double)a5 zoomScale:(double)a6 contentOffset:(struct CGPoint { double x0; double x1; })a7 xAxisDateZoom:(long long)a8 drawingToTile:(BOOL)a9 tileColumn:(long long)a10 drawingDuringScrolling:(BOOL)a11 drawingDuringAutoscale:(BOOL)a12 xAxis:(id)a13 xAxisCoordinateTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a14 virtualMargins:(id)a15 outlineColor:(id)a16 tileBackgroundColor:(id)a17 topBaselineY:(double)a18 bottomBaselineY:(double)a19 selectionLineColor:(id)a20 selectionLineStyle:(id)a21 disableXAxis:(BOOL)a22 currentXAxisHeight:(double)a23 gridlineRanges:(id)a24 effectiveVisibleRangeCadence:(id)a25 effectiveVisibleRangeActive:(id)a26 actualVisibleRange:(id)a27 scrollingAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a28 chartMeasuringStartupTime:(BOOL)a29;
- (BOOL)measuringStartupTime;
- (void)renderContentToContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForSeries:(id)a0;
- (struct CGPoint { double x0; double x1; })seriesContentOffset;
- (BOOL)seriesDrawingDuringAutoscale;
- (BOOL)seriesDrawingDuringScrolling;
- (BOOL)seriesDrawingDuringTiling;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })virtualMarginInsets;

@end
