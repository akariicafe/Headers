@class NSString, NSDictionary;

@interface HMDHouseholdNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long numStabilityReporters;
@property (readonly, nonatomic) unsigned long long numWifiAssociations;
@property (readonly, nonatomic) unsigned long long numWifiDisassociations;
@property (readonly, nonatomic) unsigned long long numAPChanges;
@property (readonly, nonatomic) unsigned long long numGatewayChanges;
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
- (id)initWithHomeUUID:(id)a0 numStabilityReporters:(unsigned long long)a1 WifiAssociations:(unsigned long long)a2 wifiDisassociations:(unsigned long long)a3 apChanges:(unsigned long long)a4 gatewayChanges:(unsigned long long)a5 numReadWrites:(unsigned long long)a6 numReadErrors:(unsigned long long)a7 numWriteErrors:(unsigned long long)a8 numSessionErrors:(unsigned long long)a9 numNetworkSignatures:(unsigned long long)a10;

@end
