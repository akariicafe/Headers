@interface HKSampleType : HKObjectType

@property (readonly, nonatomic) BOOL isMaximumDurationRestricted;
@property (readonly, nonatomic) double maximumAllowedDuration;
@property (readonly, nonatomic) BOOL isMinimumDurationRestricted;
@property (readonly, nonatomic) double minimumAllowedDuration;
@property (readonly, nonatomic) BOOL allowsRecalibrationForEstimates;

+ (id)_sampleTypeWithCode:(long long)a0;
+ (id)medicalRecordTypes;
+ (id)medicalRecordTypesWithOptions:(unsigned long long)a0;

- (BOOL)_validateMetadata:(id)a0 sample:(id)a1 error:(id *)a2;
- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)a0;
- (double)_maximumAllowedDuration;
- (double)_minimumAllowedDuration;
- (id)_rollingBaselineConfiguration;
- (BOOL)_supportsRelativeDataCalculation;
- (id)_unitForChangeInCanonicalUnit;
- (BOOL)_validateStartDate:(double)a0 endDate:(double)a1 error:(id *)a2;

@end
