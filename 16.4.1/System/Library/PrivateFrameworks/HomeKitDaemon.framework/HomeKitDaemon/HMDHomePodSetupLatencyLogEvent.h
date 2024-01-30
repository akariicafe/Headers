@class NSString, NSDictionary;

@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long setupStartTime;
@property (readonly, nonatomic) unsigned long long setupEndTime;
@property (readonly, nonatomic) unsigned long long settingsCreationTime;
@property (readonly, nonatomic) unsigned long long pairingIdentityCreationTime;
@property (readonly, nonatomic) unsigned long long accessoryAddProcessedTime;
@property (readonly, nonatomic) unsigned long long coreDataFirstCloudImportCompleteTime;
@property (readonly, nonatomic) unsigned long long siriReadinessTime;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithSetupStartTime:(unsigned long long)a0 setupEndTime:(unsigned long long)a1 settingsCreationTime:(unsigned long long)a2 pairingIdentityCreationTime:(unsigned long long)a3 accessoryAddProcessedTime:(unsigned long long)a4 coreDataFirstCloudImportCompleteTime:(unsigned long long)a5 siriReadinessTime:(unsigned long long)a6;

@end
