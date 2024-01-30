@class NSString, NSDictionary;

@interface HMDSiriCommandEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *outcome;
@property (readonly, nonatomic) unsigned long long numberOfEntities;
@property (readonly, nonatomic) unsigned long long numberOfFailures;
@property (readonly, nonatomic) unsigned long long numberOfIncompletions;
@property (readonly, nonatomic) unsigned long long configurationVersion;
@property (readonly, nonatomic) unsigned long long lastSyncedConfigurationVersion;
@property (readonly, nonatomic) unsigned long long serverConfigurationVersion;
@property (readonly, nonatomic) NSString *clientMetricIdentifier;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandEventWithDuration:(unsigned long long)a0 actionType:(id)a1 outcome:(id)a2 numberOfEntities:(unsigned long long)a3 numberOfFailures:(unsigned long long)a4 numberOfIncompletions:(unsigned long long)a5 serverConfigurationVersion:(unsigned long long)a6 configurationVersion:(unsigned long long)a7 lastSyncedConfigurationVersion:(unsigned long long)a8;
+ (unsigned long long)generateErrorCodeWithNumberOfFailures:(unsigned long long)a0 numberOfIncompletions:(unsigned long long)a1 commandOutcome:(id)a2;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithDuration:(unsigned long long)a0 actionType:(id)a1 outcome:(id)a2 numberOfEntities:(unsigned long long)a3 numberOfFailures:(unsigned long long)a4 numberOfIncompletions:(unsigned long long)a5 serverConfigurationVersion:(unsigned long long)a6 configurationVersion:(unsigned long long)a7 lastSyncedConfigurationVersion:(unsigned long long)a8;
- (id)metricForAWD;

@end
