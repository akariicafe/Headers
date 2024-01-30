@interface TSCharts.TSCHChartRadarAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    void /* unknown type, empty encoding */ valueAxisLayoutItem;
    void /* unknown type, empty encoding */ categoryAxisLayoutItem;
    void /* unknown type, empty encoding */ categoryAxisGridlineTickmarkLayoutItem;
    void /* unknown type, empty encoding */ valueAxisGridlineTickmarkLayoutItem;
    void /* unknown type, empty encoding */ gridLayoutItem;
    void /* unknown type, empty encoding */ kTSCHMaxIterationsForBodyRectEstimation;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrame;

- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)buildSubTree;
- (id)renderersWithRep:(id)a0;
- (void)layoutInward;
- (void)layoutOutward;

@end
