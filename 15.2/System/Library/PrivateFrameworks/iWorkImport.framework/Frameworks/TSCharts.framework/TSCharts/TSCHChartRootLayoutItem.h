@class TSCHChartModel, NSDictionary, TSCHChartInfo, TSCHLegendAreaLayoutItem, TSCHChartAbstractAreaLayoutItem;
@protocol TSWPStyleProviding;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem {
    TSCHChartInfo *_chartInfo;
    id<TSWPStyleProviding> _styleProvidingSource;
    TSCHChartAbstractAreaLayoutItem *_chartArea;
    TSCHLegendAreaLayoutItem *_legend;
    struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL forceLegendAtBottom; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } _layoutSettings;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _legendInnerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _chartInnerFrame;
    BOOL _inResize;
    struct CGSize { double width; double height; } _startingSize;
    TSCHChartModel *_chartModel;
}

@property (readonly, nonatomic) TSCHChartAbstractAreaLayoutItem *chartAreaLayoutItem;
@property (readonly, nonatomic) TSCHLegendAreaLayoutItem *legendAreaLayoutItem;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (nonatomic) unsigned long long dataSetIndex;

- (id)root;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })layoutSettings;
- (id)model;
- (void).cxx_destruct;
- (void)clearAll;
- (void)setLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (id)chartInfo;
- (void)buildSubTree;
- (id)renderersWithRep:(id)a0;
- (id)styleProvidingSource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (BOOL)isInResize;
- (struct CGSize { double x0; double x1; })startingSize;
- (void)layoutInward;
- (void)layoutOutward;
- (void)updateLayoutOffset;
- (void)setChartInnerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 legendInnerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (id)initWithChartInfo:(id)a0 styleProvidingSource:(id)a1;
- (struct CGPoint { double x0; double x1; })bottomLegendOffsetForChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 legendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)positionLegendAtBottom;
- (void)updateLayoutSize;
- (void)p_updatePieWedgeExplosionsFromModel;
- (void)beginResizeWithStartingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSizeDuringResizeTo:(struct CGSize { double x0; double x1; })a0;
- (void)endResizeOperation;
- (void)invalidateSeriesIndexedPieWedgeExplosions;
- (void)invalidateTransientModel;

@end
