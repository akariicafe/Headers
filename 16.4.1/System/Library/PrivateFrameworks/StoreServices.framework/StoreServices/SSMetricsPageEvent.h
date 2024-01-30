@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *pageHistoryDescription;
@property (nonatomic, getter=isCachedResponse) BOOL cachedResponse;
@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (nonatomic) double connectionEndTime;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) double connectionStartTime;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (nonatomic) double fetchStartTime;
@property (retain, nonatomic) NSString *navigationType;
@property (nonatomic) double pageRenderTime;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic) double secureConnectionStartTime;
@property (retain, nonatomic) NSString *serverApplicationInstance;
@property (retain, nonatomic) NSString *serverTiming;
@property (nonatomic, getter=isUbered) BOOL ubered;
@property (nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property (nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property (nonatomic, setter=setXPSamplingPercentageCachedResponses:) double xpSamplingPercentageCachedResponses;

- (void)setPageHistoryDescriptionWithIdentifiers:(id)a0;
- (id)init;
- (id)description;

@end
