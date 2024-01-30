@interface TSCHChartSizeAxis : TSCHChartAxis

+ (unsigned char)styleOwnerPathType;

- (double)doubleModelToAxisValue:(double)a0 forSeries:(id)a1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)a0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)a0;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)a0;
- (id)userMin;
- (id)userMax;

@end
