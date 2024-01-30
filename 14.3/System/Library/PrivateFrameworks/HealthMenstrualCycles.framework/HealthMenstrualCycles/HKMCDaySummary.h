@class HKQuantity, NSArray, NSDictionary, NSSet, NSString, NSNumber;

@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *startedCycleFactors;
@property (retain, nonatomic) NSArray *endedCycleFactors;
@property (retain, nonatomic) NSDictionary *sampleCountByType;
@property (nonatomic) long long menstrualFlow;
@property (nonatomic) BOOL intermenstrualBleeding;
@property (nonatomic) unsigned long long symptoms;
@property (nonatomic) long long sexualActivity;
@property (nonatomic) long long ovulationTestResult;
@property (nonatomic) long long cervicalMucusQuality;
@property (copy, nonatomic) HKQuantity *basalBodyTemperature;
@property (nonatomic) long long menstrualFlowModificationDayIndex;
@property (copy, nonatomic) NSNumber *startOfCycleFromCycleTracking;
@property (readonly, nonatomic) long long menstrualFlowSampleCount;
@property (readonly, nonatomic) long long sexualActivitySampleCount;
@property (readonly, nonatomic) long long ovulationTestResultSampleCount;
@property (readonly, nonatomic) long long cervicalMucusQualitySampleCount;
@property (readonly, nonatomic) long long dayIndex;
@property (readonly, nonatomic) BOOL isDataLogged;
@property (readonly, nonatomic) BOOL isSupplementaryDataLogged;
@property (readonly, copy, nonatomic) NSSet *loggedSupplementaryDisplayTypes;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)daySummaryWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 intermenstrualBleeding:(BOOL)a2 symptoms:(unsigned long long)a3 sexualActivity:(long long)a4 ovulationTestResult:(long long)a5 cervicalMucusQuality:(long long)a6 basalBodyTemperature:(id)a7;
+ (id)daySummaryWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 intermenstrualBleeding:(BOOL)a2 symptoms:(unsigned long long)a3 sexualActivity:(long long)a4 ovulationTestResult:(long long)a5 cervicalMucusQuality:(long long)a6 basalBodyTemperature:(id)a7 sampleCountByType:(id)a8;
+ (id)daySummaryWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 intermenstrualBleeding:(BOOL)a2 symptoms:(unsigned long long)a3 sexualActivity:(long long)a4 ovulationTestResult:(long long)a5 cervicalMucusQuality:(long long)a6 basalBodyTemperature:(id)a7 startedCycleFactors:(id)a8 endedCycleFactors:(id)a9 sampleCountByType:(id)a10;
+ (id)emptyDaySummaryWithDayIndex:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasFlow;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isUserEnteredDataEqual:(id)a0;
- (BOOL)_isMenstrualFlowLogged;
- (BOOL)_isIntermenstrualBleedingLogged;
- (BOOL)_isSymptomsLogged;
- (BOOL)_isSexualActivityLogged;
- (BOOL)_isOvulationTestResultLogged;
- (BOOL)_isCervicalMucusQualityLogged;
- (BOOL)_isBasalBodyTemperatureLogged;
- (BOOL)isFetched;
- (BOOL)hasConfirmedNoFlow;

@end
