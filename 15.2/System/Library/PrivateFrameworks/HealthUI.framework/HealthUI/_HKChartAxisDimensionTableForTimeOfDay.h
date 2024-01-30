@class HKTimeSinceStartOfDayNumberFormatter;

@interface _HKChartAxisDimensionTableForTimeOfDay : HKChartAxisDimensionUsingTable

@property (readonly, nonatomic) HKTimeSinceStartOfDayNumberFormatter *numberFormatter;

- (void).cxx_destruct;
- (id)stringForLocation:(id)a0;
- (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn { double x0; double x1; } *)a0 stepSizeTableSize:(long long)a1 displayType:(id)a2 unitController:(id)a3;

@end
