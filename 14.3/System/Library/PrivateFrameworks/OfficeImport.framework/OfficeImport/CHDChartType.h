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
- (void).cxx_destruct;
- (id)chart;
- (id)description;
- (id)axisIds;
- (BOOL)isHorizontal;
- (unsigned long long)categoryCount;
- (id)contentFormat;
- (id)seriesCollection;
- (id)defaultDataLabel;
- (id)initWithChart:(id)a0;
- (int)defaultLabelPosition;
- (BOOL)isPlotedOnSecondaryAxis;
- (void)switchAxes:(id)a0;
- (unsigned long long)seriesCount;
- (void)setDefaultDataLabel:(id)a0;
- (void)setSeriesCollection:(id)a0;
- (BOOL)isVaryColors;
- (void)setVaryColors:(BOOL)a0;
- (id)defaultTitleWithResources:(id)a0;
- (id)axisForClass:(Class)a0;

@end
