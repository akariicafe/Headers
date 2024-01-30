@class TSCHChartAxisAnalysis;

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis {
    TSCHChartAxisAnalysis *_inProgressAnalysisForErrorBarData;
}

- (void).cxx_destruct;
- (id)dataFormatter;
- (id)userMin;
- (id)userMax;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)a0;
- (id)dataFormatterForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (double)doubleAxisToModelValue:(double)a0;
- (double)doubleModelToAxisValue:(double)a0 forSeries:(id)a1;
- (BOOL)editableFormatForValueStrings;
- (id)formattedStringForAxisValue:(id)a0;
- (id)formattedStringForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (double)interceptForAxis:(id)a0;
- (BOOL)supportsNegativeStyle;
- (BOOL)supportsReferenceLines;
- (double)totalForGroupIndex:(unsigned long long)a0 series:(id)a1;
- (double)totalForIndex:(unsigned long long)a0 useDownsampledTotals:(BOOL)a1;
- (double)unitSpaceValueForDataSpaceValue:(double)a0 series:(id)a1 groupIndex:(unsigned long long)a2 addValuesFromAllPreviousSeries:(BOOL)a3;
- (double)unitSpaceValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 min:(double)a2 max:(double)a3;
- (double *)unitSpaceValuesForSeries:(id)a0 groupIndexSet:(id)a1 min:(double)a2 max:(double)a3;
- (void)updateGridValueTypeInterceptInAnalysis:(id)a0;
- (void)updateModelAxisAnalysis:(id)a0;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)a0 axisID:(id)a1 analysis:(id)a2;
- (void)updateMultiDataModelAxisAnalysis:(id)a0;
- (BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (id)valueForFormattedString:(id)a0;

@end
