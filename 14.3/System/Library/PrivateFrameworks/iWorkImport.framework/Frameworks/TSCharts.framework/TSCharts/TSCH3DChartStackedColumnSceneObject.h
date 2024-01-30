@interface TSCH3DChartStackedColumnSceneObject : TSCH3DChartColumnSceneObject

+ (BOOL)isHorizontalChart;
+ (id)chartSeriesType;
+ (BOOL)isStacked;

- (void)sortElements:(id *)a0 pipeline:(id)a1;

@end
