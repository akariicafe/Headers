@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}

- (void)setShowLegend:(BOOL)a0;
- (void).cxx_destruct;
- (id)chart;
- (BOOL)showLegend;
- (id)chartData;
- (void)setChartData:(id)a0;
- (void)setChart:(id)a0;

@end
