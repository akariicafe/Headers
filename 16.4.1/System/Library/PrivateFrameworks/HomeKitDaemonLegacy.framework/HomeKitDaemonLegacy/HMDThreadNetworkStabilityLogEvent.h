@class NSString, NSDictionary;

@interface HMDThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long numAdvertisedBRs;
@property (readonly, nonatomic) unsigned long long numAppleBRs;
@property (readonly, nonatomic) unsigned long long numThirdPartyBRs;
@property (readonly, nonatomic) unsigned long long numThreadNetworks;
@property (readonly, nonatomic) unsigned long long maxSimuIPPrefixesDetected;
@property (readonly, nonatomic) unsigned long long txTotal;
@property (readonly, nonatomic) unsigned long long txSuccess;
@property (readonly, nonatomic) unsigned long long txDelayAvg;
@property (readonly, nonatomic) unsigned long long rxTotal;
@property (readonly, nonatomic) unsigned long long rxSuccess;
@property (readonly, nonatomic) unsigned long long reportDuration;
@property (readonly, nonatomic) unsigned long long threadNetworkUptime;
@property (readonly, nonatomic) unsigned long long threadNetworkDowntime;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) unsigned long long numSessionErrors;
@property (readonly, nonatomic) NSString *topReadWriteError;
@property (readonly, nonatomic) NSString *topSessionError;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithHomeUUID:(id)a0 numAdvertisedBRs:(unsigned long long)a1 numAppleBRs:(unsigned long long)a2 numThirdPartyBRs:(unsigned long long)a3 numThreadNetworks:(unsigned long long)a4 maxSimuIPPrefixesDetected:(unsigned long long)a5 txTotal:(unsigned long long)a6 txSuccess:(unsigned long long)a7 txDelayAvg:(unsigned long long)a8 rxTotal:(unsigned long long)a9 rxSuccess:(unsigned long long)a10 reportDuration:(unsigned long long)a11 threadNetworkUptime:(unsigned long long)a12 threadNetworkDowntime:(unsigned long long)a13 numReadWrites:(unsigned long long)a14 numReadErrors:(unsigned long long)a15 numWriteErrors:(unsigned long long)a16 topReadWriteError:(id)a17 topSessionError:(id)a18 numSessionErrors:(unsigned long long)a19;
- (id)serializedLogEvent;

@end
