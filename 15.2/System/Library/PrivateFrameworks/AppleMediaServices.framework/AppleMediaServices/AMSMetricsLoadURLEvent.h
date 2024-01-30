@class NSString, NSArray;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (retain, nonatomic) NSString *cellularDataBearerTechnology;
@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (retain, nonatomic) NSString *clientError;
@property (nonatomic) double connectionEndTime;
@property (retain, nonatomic) NSString *connectionInterface;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (retain, nonatomic) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (retain, nonatomic) NSString *DNSServers;
@property (retain, nonatomic) NSString *edgeNodeCacheStatus;
@property (retain, nonatomic) NSString *environmentDataCenter;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) BOOL cachedResponse;
@property (retain, nonatomic) NSArray *networkQualityReports;
@property (retain, nonatomic) NSString *originalApp;
@property (retain, nonatomic) NSString *radioType;
@property (retain, nonatomic) NSString *radioTechnology;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double requestStartTime;
@property (retain, nonatomic) NSString *requestURL;
@property (retain, nonatomic) NSString *resolvedIPAddress;
@property (retain, nonatomic) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TFOEnabled;
@property (nonatomic) BOOL TLSSessionTickets;
@property (retain, nonatomic) NSString *wt;
@property (nonatomic) double xpSessionDuration;
@property (nonatomic) BOOL xpSamplingForced;
@property (nonatomic) double xpSamplingPercentageUsers;
@property (nonatomic) double xpSamplingPercentageCachedResponses;
@property (retain, nonatomic) NSString *xxdc;

+ (double)_timingDataMetricToServerTimeInterval:(id)a0;
+ (double)_randomDouble;
+ (id)_radioTypeStringValueFromRadioType:(int)a0;
+ (id)_fetchNetworkQualityReports;
+ (id)_metricsDictionaryFromConfig:(id)a0;
+ (BOOL)shouldCollectMetricsForContext:(id)a0;
+ (id)_resolvedIPAddressFromTask:(id)a0;
+ (id)_DNSServerIPAddresses;

- (id)initWithContext:(id)a0;
- (void)_prepareEventWithContext:(id)a0;

@end
