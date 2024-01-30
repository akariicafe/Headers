@class NSDictionary, NSArray;

@interface ENExposureConfiguration : NSObject <CUXPCCodable, NSCopying> {
    unsigned char _attenuationLevelValuesMap[8];
    unsigned char _daysSinceLastExposureLevelValuesMap[8];
    unsigned char _durationLevelValuesMap[8];
    unsigned char _transmissionRiskLevelValuesMap[8];
}

@property (nonatomic) unsigned int flags;
@property (nonatomic) double immediateDurationWeight;
@property (nonatomic) double nearDurationWeight;
@property (nonatomic) double mediumDurationWeight;
@property (nonatomic) double otherDurationWeight;
@property (copy, nonatomic) NSDictionary *infectiousnessForDaysSinceOnsetOfSymptoms;
@property (nonatomic) double infectiousnessStandardWeight;
@property (nonatomic) double infectiousnessHighWeight;
@property (nonatomic) double reportTypeConfirmedTestWeight;
@property (nonatomic) double reportTypeConfirmedClinicalDiagnosisWeight;
@property (nonatomic) double reportTypeSelfReportedWeight;
@property (nonatomic) double reportTypeRecursiveWeight;
@property (nonatomic) unsigned int reportTypeNoneMap;
@property (copy, nonatomic) NSArray *attenuationDurationThresholds;
@property (nonatomic) long long daysSinceLastExposureThreshold;
@property (nonatomic) double minimumRiskScoreFullRange;
@property (copy, nonatomic) NSArray *attenuationLevelValues;
@property (nonatomic) double attenuationWeight;
@property (copy, nonatomic) NSArray *daysSinceLastExposureLevelValues;
@property (nonatomic) double daysSinceLastExposureWeight;
@property (copy, nonatomic) NSArray *durationLevelValues;
@property (nonatomic) double durationWeight;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) unsigned char minimumRiskScore;
@property (copy, nonatomic) NSArray *transmissionRiskLevelValues;
@property (nonatomic) double transmissionRiskWeight;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (double)attenuationLevelValueWithAttenuation:(unsigned char)a0;
- (double)daysSinceLastExposureLevelValueWithDays:(long long)a0;
- (double)durationLevelValueWithDuration:(double)a0;
- (double)transmissionLevelValueWithTransmissionRiskLevel:(unsigned char)a0;
- (double)infectiousnessWeightWithDaysSinceOnsetOfSymptoms:(long long)a0 skip:(BOOL *)a1;
- (double)reportTypeWeightWithReportType:(unsigned int)a0 skip:(BOOL *)a1;
- (double)weightedDurationWithExposureInfo:(id)a0;
- (unsigned int)mappedDiagnosisReportType:(unsigned int)a0;
- (unsigned int)infectiousnessWithDaysSinceOnsetOfSymptoms:(long long)a0;

@end
