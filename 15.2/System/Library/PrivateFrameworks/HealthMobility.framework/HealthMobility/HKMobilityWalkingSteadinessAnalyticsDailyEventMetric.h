@class NSNumber, NSString;

@interface HKMobilityWalkingSteadinessAnalyticsDailyEventMetric : NSObject <HKMobilityAnalyticsEventMetric>

@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed;
@property (retain, nonatomic) NSNumber *hasWalkingSteadinessMeasurements;
@property (retain, nonatomic, getter=isWalkingSteadinessNotificationsEnabled) NSNumber *walkingSteadinessNotificationsEnabled;
@property (retain, nonatomic) NSString *activePairedWatchType;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (retain, nonatomic) NSNumber *hasHeight;
@property (retain, nonatomic) NSNumber *numberOfDaysSinceLastWalkingSteadinessMeasurement;
@property (retain, nonatomic) NSNumber *numberOfLowNotificationsInPastYear;
@property (retain, nonatomic) NSNumber *numberOfRepeatLowNotificationsInPastYear;
@property (retain, nonatomic) NSNumber *numberOfVeryLowNotificationsInPastYear;
@property (retain, nonatomic) NSNumber *numberOfRepeatVeryLowNotificationsInPastYear;
@property (retain, nonatomic) NSNumber *numberOfInitialNotificationsInPastYear;
@property (retain, nonatomic) NSNumber *daysSinceLastRepeatNotification;
@property (retain, nonatomic) NSNumber *daysSinceLastInitialNotification;
@property (retain, nonatomic) NSString *currentWalkingSteadinessClassification;
@property (retain, nonatomic) NSString *previousWalkingSteadinessClassification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresImproveHealthAndActivityAllowed;

@end
