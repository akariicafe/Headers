@class TSCHChartModel, TSCHChartInfo;

@interface TSCHChartLayout : NSObject {
    BOOL mNeedsLayout;
}

@property (readonly) TSCHChartInfo *chartInfo;
@property (readonly) TSCHChartModel *model;
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
@property struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;

+ (id)chartLayoutWithChartInfo:(id)a0;
+ (id)propertiesThatInvalidateLayout;
+ (struct CGSize { double x0; double x1; })legendSizeForChartInfo:(id)a0 initialWidth:(double)a1;

- (void).cxx_destruct;
- (BOOL)isValid;
- (void)invalidate;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (void)processChanges:(id)a0;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (void)beginResize;
- (id)initWithChartInfo:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (void)layoutForChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForChartAreaSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForResize;
- (void)layoutForResizingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setForceOmitLegend:(BOOL)a0;
- (void)setForceOmitLabelPlacement:(BOOL)a0;
- (void)layoutForCircumscribingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setForceTitleAtTop:(BOOL)a0;
- (id)renderersWithRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertChartLayoutSpaceRectToNaturalSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertChartLayoutSpaceToNaturalSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertNaturalSpaceRectToChartLayoutSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitChartElements:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (struct CGPoint { double x0; double x1; })convertNaturalSpaceToChartLayoutSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)takeSizeFromTracker:(id)a0;
- (void)endResize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToConvertChartLayoutToNatural;

@end
