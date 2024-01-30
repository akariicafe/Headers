@class NSString, NSArray;

@interface SSMetricsLoadURLEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelayRequested;
@property (nonatomic) BOOL apsRelaySucceeded;
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
@property (nonatomic) double fetchStartTime;
@property (nonatomic) BOOL cachedResponse;
@property (retain, nonatomic) NSArray *networkQualityReports;
@property (retain, nonatomic) NSString *originalApp;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) double requestStartTime;
@property (retain, nonatomic) NSString *requestURL;
@property (retain, nonatomic) NSString *resolvedIPAddress;
@property (retain, nonatomic) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TLSSessionTickets;
@property (nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property (nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property (nonatomic, setter=setXPSamplingPercentageCachedResponses:) double xpSamplingPercentageCachedResponses;

+ (BOOL)shouldLogTimingMetrics;
+ (double)_randomDouble;
+ (BOOL)shouldReportCachedEventWithSamplingPercentage:(double)a0;
+ (BOOL)shouldReportCachedEvent;
+ (BOOL)shouldCollectTimingData;
+ (void)_setTimingMetricsWindowStartTime:(id)a0;
+ (id)_timingMetricsWindowStartTime;
+ (BOOL)shouldCollectTimingDataWithSessionDelegate:(id)a0;
+ (BOOL)shouldCollectTimingDataWithSessionDuration:(double)a0 samplingPercentage:(double)a1;

- (id)init;
- (id)description;

@end
