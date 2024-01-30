@class NSString, NSDictionary;

@interface HMDXPCActivityRunReportLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *activityName;
@property (readonly, nonatomic) long long activityDefinedIntervalInMinutes;
@property (readonly, nonatomic) BOOL activityShouldWake;
@property (readonly, nonatomic) long long activityRunHourOfDay;
@property (readonly, nonatomic) long long activityTimeSinceLastRunInMinutes;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithActivityName:(id)a0 definedInterval:(double)a1 activityShouldWake:(BOOL)a2 timeSinceLastRun:(double)a3;

@end
