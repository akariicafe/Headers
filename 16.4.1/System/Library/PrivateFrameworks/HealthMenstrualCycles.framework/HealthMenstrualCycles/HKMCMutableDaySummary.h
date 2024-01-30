@class NSNumber, HKQuantity;

@interface HKMCMutableDaySummary : HKMCDaySummary

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

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
