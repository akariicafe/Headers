@class TSCHChartModel, NSDictionary, TSCHChartInfo, TSCHLegendAreaLayoutItem, TSCHChartAbstractAreaLayoutItem;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent> {
    TSCHChartInfo *mChartInfo;
    TSCHChartAbstractAreaLayoutItem *mChartArea;
    TSCHLegendAreaLayoutItem *mLegend;
    struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } mLayoutSettings;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLegendInnerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mChartInnerFrame;
    BOOL mInResize;
    struct CGSize { double width; double height; } mStartingSize;
    TSCHChartModel *mChartModel;
}

@property (readonly, nonatomic) TSCHChartAbstractAreaLayoutItem *chartAreaLayoutItem;
@property (readonly, nonatomic) TSCHLegendAreaLayoutItem *legendAreaLayoutItem;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (nonatomic) unsigned long long dataSetIndex;

- (id)root;
- (id)model;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })layoutSettings;
- (void)clearAll;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithChartInfo:(id)a0;
- (id)chartInfo;
- (void)clearParent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (BOOL)isInResize;
- (struct CGSize { double x0; double x1; })startingSize;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)a0;
- (void)updateLayoutOffset;
- (void)setChartInnerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 legendInnerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (void)buildSubTree;
- (void)updateLayoutSize;
- (void)p_updatePieWedgeExplosionsFromModel;
- (void)beginResizeWithStartingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSizeDuringResizeTo:(struct CGSize { double x0; double x1; })a0;
- (void)endResizeOperation;
- (void)invalidateSeriesIndexedPieWedgeExplosions;
- (void)invalidateTransientModel;

@end
