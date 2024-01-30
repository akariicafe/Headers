@class TSCHChartAxisAnalysis;

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis {
    TSCHChartAxisAnalysis *_inProgressAnalysisForErrorBarData;
}

- (void).cxx_destruct;
- (id)dataFormatter;
- (double)interceptForAxis:(id)a0;
- (id)userMax;
- (id)userMin;
- (double)doubleModelToAxisValue:(double)a0 forSeries:(id)a1;
- (BOOL)supportsReferenceLines;
- (id)formattedStringForAxisValue:(id)a0;
- (id)dataFormatterForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (double)totalForGroupIndex:(unsigned long long)a0 series:(id)a1;
- (id)formattedStringForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)a0;
- (void)updateMultiDataModelAxisAnalysis:(id)a0;
- (double)doubleAxisToModelValue:(double)a0;
- (void)updateModelAxisAnalysis:(id)a0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)a0;
- (double)unitSpaceValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 min:(double)a2 max:(double)a3;
- (double *)unitSpaceValuesForSeries:(id)a0 groupIndexSet:(id)a1 min:(double)a2 max:(double)a3;
- (double)unitSpaceValueForDataSpaceValue:(double)a0 series:(id)a1 groupIndex:(unsigned long long)a2 addValuesFromAllPreviousSeries:(BOOL)a3;
- (BOOL)editableFormatForValueStrings;
- (id)valueForFormattedString:(id)a0;
- (BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)a0 axisID:(id)a1 analysis:(id)a2;
- (double)totalForIndex:(unsigned long long)a0 useDownsampledTotals:(BOOL)a1;

@end
