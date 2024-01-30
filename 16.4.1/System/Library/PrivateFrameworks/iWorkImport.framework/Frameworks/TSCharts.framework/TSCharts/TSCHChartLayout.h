@class TSCHChartModel, TSCHChartInfo;
@protocol TSWPStyleProviding;

@interface TSCHChartLayout : NSObject

@property (nonatomic) BOOL needsLayout;
@property (retain, nonatomic) TSCHChartInfo *chartInfo;
@property (weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outerLayoutFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outerShadowFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } chartAreaFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } legendFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } legendDrawingFrame;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } legendGeometryFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } legendModelGeometryFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } chartBodyFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrame;
@property unsigned long long dataSetIndex;
@property struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL forceLegendAtBottom; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;
@property (readonly, nonatomic) BOOL isValid;

+ (id)chartLayoutWithChartInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })legendSizeForChartInfo:(id)a0 initialWidth:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerRectForRects:(id)a0;
+ (id)propertiesThatInvalidateLayout;

- (void)invalidate;
- (void).cxx_destruct;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (void)processChanges:(id)a0;
- (void)beginDynamicOperation;
- (void)beginResize;
- (void)endDynamicOperation;
- (id)initWithChartInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForResize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertChartLayoutSpaceRectToNaturalSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertChartLayoutSpaceToNaturalSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertNaturalSpaceRectToChartLayoutSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertNaturalSpaceToChartLayoutSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)endResize;
- (id)hitChartElements:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (void)layoutForChartAreaSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForCircumscribingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForResizingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (const struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (id)renderersWithRep:(id)a0;
- (void)setForceLegendAtBottom:(BOOL)a0;
- (void)setForceOmitLabelPlacement:(BOOL)a0;
- (void)setForceOmitLegend:(BOOL)a0;
- (void)setForceTitleAtTop:(BOOL)a0;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (void)takeSizeFromTracker:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToConvertChartLayoutToNatural;

@end
