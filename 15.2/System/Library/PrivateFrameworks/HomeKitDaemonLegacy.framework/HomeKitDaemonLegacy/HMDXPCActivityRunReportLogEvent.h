@class NSString, NSDictionary;

@interface HMDXPCActivityRunReportLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *activityName;
@property (readonly, nonatomic) long long activityDefinedIntervalInMinutes;
@property (readonly, nonatomic) BOOL activityShouldWake;
@property (readonly, nonatomic) long long activityRunHourOfDay;
@property (readonly, nonatomic) long long activityTimeSinceLastRunInMinutes;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithActivityName:(id)a0 definedInterval:(double)a1 activityShouldWake:(BOOL)a2 timeSinceLastRun:(double)a3;

@end
