@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}

- (id)chart;
- (void).cxx_destruct;
- (id)chartData;
- (void)setChartData:(id)a0;
- (void)setShowLegend:(BOOL)a0;
- (BOOL)showLegend;
- (void)setChart:(id)a0;

@end
