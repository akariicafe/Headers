@class HKUnitPreferenceController, HKDisplayType;

@interface HKChartAxisDimensionUsingTable : NSObject <HKAxisLabelDimension>

@property (readonly) struct HKStepSizeTableEntryDefn { double x0; double x1; } *stepSizeTable;
@property (readonly) long long stepSizeTableSize;
@property (readonly) HKDisplayType *displayType;
@property (readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)endingLabelsFactorOverride;
- (id)formatterForLabelStepSize:(double)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (id)stringForLocation:(id)a0 formatterForStepSize:(id)a1;
- (double)ticksPerStepSize:(double)a0;
- (struct HKStepSizeTableEntryDefn { double x0; double x1; } *)_findStepSize:(double)a0 allowEqual:(BOOL)a1;
- (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn { double x0; double x1; } *)a0 stepSizeTableSize:(long long)a1 displayType:(id)a2 unitController:(id)a3;

@end
