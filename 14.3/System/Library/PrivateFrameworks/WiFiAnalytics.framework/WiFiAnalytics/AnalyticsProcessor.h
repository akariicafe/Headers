@class LinkChangePolicyHandler, NSDateFormatter, AnalyticsStoreMOHandler, DeploymentMetricHandler, RoamPolicyStore;

@interface AnalyticsProcessor : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;
@property (retain, nonatomic) LinkChangePolicyHandler *linkChangePolicyHandler;
@property (retain, nonatomic) RoamPolicyStore *roamPolicyHandler;
@property (retain, nonatomic) DeploymentMetricHandler *deploymentMetricHandler;
@property (nonatomic) unsigned long long testDateDiffDays;
@property (nonatomic) unsigned long long deploymentMetricDiffDays;
@property (retain, nonatomic) NSDateFormatter *dateFormatterWAMessage;

+ (id)formattedMACAddressNotation:(id)a0 octetCount:(unsigned long long)a1;

- (void)performPruneBasedOnStoreSize;
- (id)init;
- (void).cxx_destruct;
- (void)processMetricIpV4Latency:(id)a0;
- (BOOL)unpackRssiSnrCCAFromRssiMetricField:(id)a0 unpackedRssi:(id *)a1 unpackedCca:(id *)a2 unpackedSnr:(id *)a3;
- (void)processWAMessageMetric:(id)a0 data:(id)a1;
- (void)processMetricLinkChange:(id)a0;
- (void)processMetricNetworkGeotag:(id)a0;
- (void)processMetricRoamStatus:(id)a0;
- (void)ageOutAnalytics:(double)a0;
- (id)summarizeAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1;
- (id)getDateFromDateString:(id)a0;
- (void)processMetricKnownNetworkEvent:(id)a0;
- (id)formattedNotation:(id)a0 octetCount:(unsigned long long)a1;
- (void)processMetricAssociationFailure:(id)a0;
- (void)processMetricClientAssociation:(id)a0;
- (void)processMetricParsedBeaconInfo:(id)a0;

@end
