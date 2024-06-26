@interface WFHealthKitHelper : NSObject

+ (id)localizedDisplayNameForUnit:(id)a0 value:(id)a1;
+ (void)sourcesForSampleType:(id)a0 completion:(id /* block */)a1;
+ (void)sourceWithName:(id)a0 ofSampleType:(id)a1 completion:(id /* block */)a2;
+ (id)extractHKDataFromContentQuery:(id)a0;
+ (id)readableSampleTypes;
+ (id)localizedSampleTypes;
+ (void)validUnitsForQuantityType:(id)a0 completion:(id /* block */)a1;
+ (id)localizedDisplayNameForUnit:(id)a0 quantityTypeIdentifier:(id)a1;
+ (id)localizedDisplayNameForUnit:(id)a0 value:(id)a1 quantityTypeIdentifier:(id)a2;
+ (id)sampleTypeIdentifierFromReadableTypeIdentifier:(id)a0;
+ (id)readableSampleTypeIdentifierFromSampleTypeIdentifier:(id)a0;
+ (id)readableCharacteristicTypes;
+ (id)readableBiologicalSexFromEnum:(long long)a0;
+ (id)readableBloodTypeFromEnum:(long long)a0;
+ (id)characteristicTypeIdentifierFromReadableTypeIdentifier:(id)a0;
+ (id)readableTypeIdentifierFromCharacteristicTypeIdentifier:(id)a0;
+ (id)readableWorkoutActivityTypes;
+ (BOOL)readableWorkoutActivityTypeIsValid:(id)a0;
+ (unsigned long long)workoutActivityTypeFromReadableWorkoutActivityType:(id)a0;
+ (id)readableWorkoutActivityTypeFromWorkoutActivityType:(unsigned long long)a0;
+ (id)readableAppleStandingHourValues;
+ (id)readableCervicalMucusQualityValues;
+ (id)readableMenstrualFlowValues;
+ (id)readableMenstrualFlowIsStartOfCycleValues;
+ (id)readableOvulationTestResultValues;
+ (id)readableSleepAnalysisValues;
+ (id)readableSexualActivityValues;
+ (id)readableAppleStandingHourFromEnum:(long long)a0;
+ (id)readableCervicalMucusQualityFromEnum:(long long)a0;
+ (id)readableMenstrualFlowFromEnum:(long long)a0;
+ (id)readableMenstrualFlowIsStartOfCycleFromBool:(BOOL)a0;
+ (id)readableOvulationTestResultFromEnum:(long long)a0;
+ (id)readableSleepAnalysisFromEnum:(long long)a0;
+ (id)readableSexualActivityFromBool:(BOOL)a0;
+ (long long)enumFromReadableAppleStandingHour:(id)a0;
+ (long long)enumFromReadableCervicalMucusQuality:(id)a0;
+ (long long)enumFromReadableMenstrualFlow:(id)a0;
+ (id)boolFromReadableMenstrualFlowIsStartOfCycle:(id)a0;
+ (long long)enumFromReadableOvulationTestResult:(id)a0;
+ (long long)enumFromReadableSleepAnalysis:(id)a0;
+ (id)boolFromReadableSexualActivity:(id)a0;
+ (id)readableInsulinDeliveryReasonValues;
+ (id)readableBloodGlucoseMealTimeValues;
+ (id)readableVO2MaxTestTypeValues;
+ (id)readableInsulinDeliveryReasonFromEnum:(long long)a0;
+ (id)readableBloodGlucoseMealTimeFromEnum:(long long)a0;
+ (id)readableVO2MaxTestTypeFromEnum:(long long)a0;
+ (long long)enumFromReadableInsulinDeliveryReason:(id)a0;
+ (long long)enumFromReadableBloodGlucoseMealTime:(id)a0;
+ (long long)enumFromReadableVO2MaxTestType:(id)a0;

@end
