@class HKUnitPreferenceController, HKDisplayType, HKQuantityDisplayTypeValueFormatter;

@interface HKAxisLabelDimensionRelativeTemperature : HKAxisLabelDimensionScalar

@property (retain, nonatomic) HKQuantityDisplayTypeValueFormatter *valueFormatter;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)stringForLocation:(id)a0 formatterForStepSize:(id)a1;
- (id)initWithDisplayType:(id)a0 unitPreferencesController:(id)a1;

@end
