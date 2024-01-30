@class UIColor;

@interface HKUIMetricColors : NSObject

@property (retain, nonatomic) UIColor *keyColor;
@property (retain, nonatomic) UIColor *contextViewPrimaryTextColor;
@property (retain, nonatomic) UIColor *contextViewSecondaryTextColor;
@property (retain, nonatomic) UIColor *contextViewInfoButtonGlyphColor;
@property (retain, nonatomic) UIColor *contextViewInfoButtonBackgroundColor;

+ (id)medicationsClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)conditionsClinicalColors;
+ (id)proceduresClinicalColors;
+ (id)immunizationsClinicalColors;
+ (id)allergiesClinicalColors;
+ (id)unknownCategoryClinicalColors;
+ (id)insuranceClinicalColors;
+ (id)vitalsColors;
+ (id)mindfulnessColors;
+ (id)workoutContextViewColors;
+ (id)hearingHealthColors;
+ (id)sleepColors;
+ (id)defaultContextViewColorsUsingColor:(id)a0;
+ (id)activityColors;
+ (id)bodyMeasurementColors;
+ (id)reproductiveHealthColors;
+ (id)respiratoryColors;
+ (id)otherColors;
+ (id)carePlansClinicalColors;
+ (id)devicesClinicalColors;
+ (id)socialHistoryClinicalColors;
+ (id)mobilityColors;
+ (id)symptomsColors;
+ (id)defaultClinicalColors;
+ (id)metricColorsForHeartRateContext:(long long)a0;

- (void).cxx_destruct;

@end
