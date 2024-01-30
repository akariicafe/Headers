@interface HKMetadataValidationUtilities : NSObject

+ (BOOL)hk_validateActivityMoveModeMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateAppleECGAlgorithmValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateAppleHeartbeatSeriesAlgorithmVersionMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateAppleIrregularRhythmNotificationsAlgorithmVersionMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateBodyTemperatureSensorLocationMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateCoreMotionSourceIdentifierMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateDevicePlacementSideValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateDigitalSignatureMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateHeartRateRecoveryActivityTypeMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateHeartRateRecoveryTestTypeMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateHeartRateSensorLocationMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateInsulinDeliveryReasonMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateMealTimeMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateMetadataValueClass:(id)a0 forKey:(id)a1 expectedClassLookupTable:(id)a2 error:(id *)a3;
+ (BOOL)hk_validateQuantityMetadataValue:(id)a0 value:(id)a1 compatibleUnit:(id)a2 error:(id *)a3;
+ (BOOL)hk_validateSwimmingLocationTypeMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateSwimmingStrokeStyleMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateSyncIdentifierMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateSyncVersionMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateTimeZoneMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateUserMotionContextMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateVO2MaxTestTypeMetadataValue:(id)a0 error:(id *)a1;
+ (BOOL)hk_validateWeatherConditionMetadataValue:(id)a0 error:(id *)a1;

@end
