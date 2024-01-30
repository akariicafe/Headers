@class NSString, NSDictionary;

@interface HMDHouseholdThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long numStabilityReporters;
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
@property (readonly, nonatomic) unsigned long long numNetworkSignatures;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithHomeUUID:(id)a0 numStabilityReporters:(unsigned long long)a1 numAdvertisedBRs:(unsigned long long)a2 numAppleBRs:(unsigned long long)a3 numThirdPartyBRs:(unsigned long long)a4 numThreadNetworks:(unsigned long long)a5 maxSimuIPPrefixesDetected:(unsigned long long)a6 txTotal:(unsigned long long)a7 txSuccess:(unsigned long long)a8 txDelayAvg:(unsigned long long)a9 rxTotal:(unsigned long long)a10 rxSuccess:(unsigned long long)a11 reportDuration:(unsigned long long)a12 threadNetworkUptime:(unsigned long long)a13 threadNetworkDowntime:(unsigned long long)a14 numReadWrites:(unsigned long long)a15 numReadErrors:(unsigned long long)a16 numWriteErrors:(unsigned long long)a17 numSessionErrors:(unsigned long long)a18;

@end
