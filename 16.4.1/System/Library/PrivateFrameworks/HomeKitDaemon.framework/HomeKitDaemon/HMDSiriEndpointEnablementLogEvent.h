@class NSString, NSDictionary;

@interface HMDSiriEndpointEnablementLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long numCapableSiriEndpointAccessories;
@property (readonly, nonatomic) unsigned long long numEnabledSiriEndpointAccessories;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDictionary:(id)a0;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithConfigurationDataSource:(id)a0;
- (id)initWithHomeUUID:(id)a0 numCapableSiriEndpoints:(unsigned long long)a1 numEnabledSiriEndpoints:(unsigned long long)a2;
- (id)serializedMetric;

@end
