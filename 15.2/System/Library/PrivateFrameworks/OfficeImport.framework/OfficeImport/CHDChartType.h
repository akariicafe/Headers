@class EDCollection, CHDChart, CHDDataLabel, CHDSeriesCollection;

@interface CHDChartType : NSObject {
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    BOOL mVaryColors;
}

+ (id)chartTypeWithChart:(id)a0;
+ (BOOL)is3DType;

- (id)axes;
- (unsigned long long)categoryCount;
- (id)chart;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isHorizontal;
- (id)axisIds;
- (id)initWithChart:(id)a0;
- (id)contentFormat;
- (int)defaultLabelPosition;
- (BOOL)isPlotedOnSecondaryAxis;
- (void)switchAxes:(id)a0;
- (unsigned long long)seriesCount;
- (id)seriesCollection;
- (id)defaultDataLabel;
- (void)setDefaultDataLabel:(id)a0;
- (void)setSeriesCollection:(id)a0;
- (BOOL)isVaryColors;
- (void)setVaryColors:(BOOL)a0;
- (id)defaultTitleWithResources:(id)a0;
- (id)axisForClass:(Class)a0;

@end
