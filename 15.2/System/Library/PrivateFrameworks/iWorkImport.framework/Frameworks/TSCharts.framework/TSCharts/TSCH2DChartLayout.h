@class NSDictionary, TSCHChartRootLayoutItem, NSValue;

@interface TSCH2DChartLayout : TSCHChartLayout {
    TSCHChartRootLayoutItem *_layoutTreeRoot;
    struct CGSize { double width; double height; } _lastChartBodySize;
    struct CGSize { double width; double height; } _startingSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingLegendInnerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingChartInnerFrame;
    NSValue *_cachedOriginRelativeToChartAreaFrame;
}

@property (readonly) TSCHChartRootLayoutItem *p_layoutTree;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;

+ (id)propertiesThatInvalidateLayout;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (id)model;
- (void).cxx_destruct;
- (void)setLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (void)invalidate;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (id)initWithChartInfo:(id)a0;
- (void)setStyleProvidingSource:(id)a0;
- (id)renderersWithRep:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (void)layoutForChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartBodyFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendFrame;
- (void)p_ensureValidForInwardLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartAreaFrame;
- (void)layoutForChartAreaSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForResize;
- (void)layoutForResizingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDataSetIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerLayoutFrame;
- (void)layoutForCircumscribingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerShadowFrame;
- (unsigned long long)dataSetIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendModelGeometryFrame;
- (struct CGPoint { double x0; double x1; })p_cachedOriginRelativeToChartAreaFrame;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_layoutNowForCircumscribingSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_layoutNowForChartAreaSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_layoutNowForChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (id)hitChartElements:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (const struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendDrawingFrame;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendGeometryFrame;
- (void)setLegendGeometryFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
