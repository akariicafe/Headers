@class NSString, NSDictionary, NSNumber;

@interface HDMCDailyMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed;
@property (retain, nonatomic, getter=isOnboardingCompleted) NSNumber *onboardingCompleted;
@property (retain, nonatomic) NSNumber *onboardedVersion;
@property (retain, nonatomic) NSNumber *weeksSinceOnboarded;
@property (retain, nonatomic) NSNumber *hasCompatiblePairedAppleWatch;
@property (retain, nonatomic) NSNumber *hasSameAlgorithmVersionOnPairedWatch;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLogging;
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLoggingInCycleTracking;
@property (retain, nonatomic, getter=isOngoingContraception) NSNumber *ongoingContraception;
@property (retain, nonatomic, getter=isOngoingLactation) NSNumber *ongoingLactation;
@property (retain, nonatomic, getter=isOngoingPregnancy) NSNumber *ongoingPregnancy;
@property (retain, nonatomic) NSNumber *cycleLengthVariationLowerPercentile;
@property (retain, nonatomic) NSNumber *cycleLengthVariationUpperPercentile;
@property (retain, nonatomic) NSNumber *periodPredictionEnabled;
@property (retain, nonatomic) NSNumber *periodNotificationEnabled;
@property (retain, nonatomic) NSNumber *fertilityPredictionEnabled;
@property (retain, nonatomic) NSNumber *fertilityNotificationEnabled;
@property (retain, nonatomic) NSNumber *logFactorsEnabled;
@property (retain, nonatomic) NSNumber *logSymptomsEnabled;
@property (retain, nonatomic) NSNumber *logSpottingEnabled;
@property (retain, nonatomic) NSNumber *logSexualActivityEnabled;
@property (retain, nonatomic) NSNumber *logCervicalMucusQualityEnabled;
@property (retain, nonatomic) NSNumber *logBasalBodyTemperatureEnabled;
@property (retain, nonatomic) NSNumber *logOvulationTestResultEnabled;

- (void).cxx_destruct;
- (id)initWithImproveHealthAndActivityAllowed:(BOOL)a0;
- (id)_biologicalSexString;

@end
