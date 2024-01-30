@class NSString, NSArray;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (copy, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (retain, nonatomic) NSString *cellularDataBearerTechnology;
@property (copy, nonatomic) NSString *clientCorrelationKey;
@property (copy, nonatomic) NSString *clientError;
@property (nonatomic) double connectionEndTime;
@property (copy, nonatomic) NSString *connectionInterface;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (copy, nonatomic) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (copy, nonatomic) NSString *DNSServers;
@property (copy, nonatomic) NSString *edgeNodeCacheStatus;
@property (copy, nonatomic) NSString *environmentDataCenter;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) BOOL cachedResponse;
@property (copy, nonatomic) NSArray *networkQualityReports;
@property (copy, nonatomic) NSString *originalApp;
@property (copy, nonatomic) NSString *radioType;
@property (copy, nonatomic) NSString *radioTechnology;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double requestStartTime;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *resolvedIPAddress;
@property (copy, nonatomic) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) unsigned long long responseMessageSizeUncompressed;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TFOEnabled;
@property (nonatomic) BOOL TLSSessionTickets;
@property (copy, nonatomic) NSString *wt;
@property (nonatomic) double xpSessionDuration;
@property (nonatomic) BOOL xpSamplingForced;
@property (nonatomic) double xpSamplingPercentageUsers;
@property (nonatomic) double xpSamplingPercentageCachedResponses;
@property (copy, nonatomic) NSString *xxdc;

+ (double)_timingDataMetricToServerTimeInterval:(id)a0;
+ (BOOL)shouldCollectMetricsForContext:(id)a0;
+ (id)_fetchNetworkQualityReports;
+ (id)_radioTypeStringValueFromRadioType:(int)a0;
+ (id)_propertyValueClassesForKnownProperties;
+ (double)_randomDouble;
+ (id)_DNSServerIPAddresses;
+ (id)_resolvedIPAddressFromTask:(id)a0;
+ (id)_metricsDictionaryFromConfig:(id)a0;

- (id)initWithContext:(id)a0;
- (void)_prepareEventWithContext:(id)a0;

@end
