@interface TSCHChartPieAxis : TSCHChartStackedPercentValueAxis

- (id)formattedStringForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)a0;
- (BOOL)supportsFormattedStringForInvalidValue;
- (double)totalForGroupIndex:(unsigned long long)a0;
- (BOOL)supportsAxisValueLabels;
- (BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;

@end
