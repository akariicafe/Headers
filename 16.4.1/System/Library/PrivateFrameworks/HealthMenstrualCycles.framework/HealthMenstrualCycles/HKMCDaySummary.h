@class HKQuantity, NSArray, NSDictionary, HKMCWristTemperature, NSSet, NSNumber, NSString;

@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, HKRedactedDescription, NSMutableCopying, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long menstrualFlow;
@property (nonatomic) BOOL intermenstrualBleeding;
@property (nonatomic) unsigned long long symptoms;
@property (nonatomic) long long sexualActivity;
@property (nonatomic) long long ovulationTestResult;
@property (nonatomic) long long pregnancyTestResult;
@property (nonatomic) long long progesteroneTestResult;
@property (nonatomic) long long cervicalMucusQuality;
@property (copy, nonatomic) HKQuantity *basalBodyTemperature;
@property (copy, nonatomic) NSNumber *startOfCycleFromCycleTracking;
@property (readonly, copy, nonatomic) NSArray *startedCycleFactors;
@property (readonly, copy, nonatomic) NSArray *endedCycleFactors;
@property (readonly, copy, nonatomic) NSDictionary *sampleCountByType;
@property (readonly, nonatomic) long long menstrualFlowSampleCount;
@property (readonly, nonatomic) long long sexualActivitySampleCount;
@property (readonly, nonatomic) long long ovulationTestResultSampleCount;
@property (readonly, nonatomic) long long pregnancyTestResultSampleCount;
@property (readonly, nonatomic) long long progesteroneTestResultSampleCount;
@property (readonly, nonatomic) long long cervicalMucusQualitySampleCount;
@property (readonly, nonatomic) long long dayIndex;
@property (readonly, copy, nonatomic) HKMCWristTemperature *wristTemperature;
@property (readonly, nonatomic) long long menstrualFlowModificationDayIndex;
@property (readonly, nonatomic) BOOL isDataLogged;
@property (readonly, nonatomic) BOOL isSupplementaryDataLogged;
@property (readonly, copy, nonatomic) NSSet *loggedSupplementaryDisplayTypes;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)daySummaryWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 intermenstrualBleeding:(BOOL)a2 symptoms:(unsigned long long)a3 sexualActivity:(long long)a4 ovulationTestResult:(long long)a5 pregnancyTestResult:(long long)a6 progesteroneTestResult:(long long)a7 cervicalMucusQuality:(long long)a8 basalBodyTemperature:(id)a9;
+ (id)daySummaryWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 intermenstrualBleeding:(BOOL)a2 symptoms:(unsigned long long)a3 sexualActivity:(long long)a4 ovulationTestResult:(long long)a5 pregnancyTestResult:(long long)a6 progesteroneTestResult:(long long)a7 cervicalMucusQuality:(long long)a8 basalBodyTemperature:(id)a9 wristTemperature:(id)a10 menstrualFlowModificationDayIndex:(long long)a11 startOfCycleFromCycleTracking:(id)a12 startedCycleFactors:(id)a13 endedCycleFactors:(id)a14 sampleCountByType:(id)a15;
+ (id)emptyDaySummaryWithDayIndex:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasFlow;
- (BOOL)_isProgesteroneTestResultLogged;
- (BOOL)_isIntermenstrualBleedingLogged;
- (id)_daySummaryWithOverrideSourceIDBySourceID:(id)a0 ignoreCycleFactors:(BOOL)a1 ignoreOvulationTestResults:(BOOL)a2;
- (id)_initFromDaySummary:(id)a0;
- (id)_initWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 intermenstrualBleeding:(BOOL)a2 symptoms:(unsigned long long)a3 sexualActivity:(long long)a4 ovulationTestResult:(long long)a5 pregnancyTestResult:(long long)a6 progesteroneTestResult:(long long)a7 cervicalMucusQuality:(long long)a8 basalBodyTemperature:(id)a9 wristTemperature:(id)a10 menstrualFlowModificationDayIndex:(long long)a11 startOfCycleFromCycleTracking:(id)a12 startedCycleFactors:(id)a13 endedCycleFactors:(id)a14 sampleCountByType:(id)a15;
- (BOOL)_isBasalBodyTemperatureLogged;
- (BOOL)_isCervicalMucusQualityLogged;
- (BOOL)_isMenstrualFlowLogged;
- (BOOL)_isOvulationTestResultLogged;
- (BOOL)_isPregnancyTestResultLogged;
- (BOOL)_isSexualActivityLogged;
- (BOOL)_isSymptomsLogged;
- (BOOL)hasConfirmedNoFlow;
- (BOOL)isFetched;
- (BOOL)isUserEnteredDataEqual:(id)a0;

@end
