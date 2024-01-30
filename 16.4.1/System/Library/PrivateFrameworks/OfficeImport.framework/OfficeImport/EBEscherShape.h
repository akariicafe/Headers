@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}

- (void).cxx_destruct;
- (id)chartData;
- (void)setChartData:(id)a0;
- (id)chart;
- (void)setChart:(id)a0;
- (void)setShowLegend:(BOOL)a0;
- (BOOL)showLegend;

@end
