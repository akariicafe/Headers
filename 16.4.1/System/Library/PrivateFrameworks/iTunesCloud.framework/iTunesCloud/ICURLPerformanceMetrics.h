@class NSString;

@interface ICURLPerformanceMetrics : NSObject

@property (readonly, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) NSString *jingleCorrelationKey;
@property (readonly, nonatomic) double connectionStartTime;
@property (readonly, nonatomic) double connectionEndTime;
@property (readonly, nonatomic) double domainLookupStartTime;
@property (readonly, nonatomic) double domainLookupEndTime;
@property (readonly, nonatomic) double fetchStartTime;
@property (readonly, nonatomic) double requestStartTime;
@property (readonly, nonatomic) double responseStartTime;
@property (readonly, nonatomic) double responseEndTime;
@property (readonly, nonatomic) double secureConnectionStartTime;
@property (readonly, nonatomic) BOOL cachedResponse;
@property (readonly, nonatomic) BOOL connectionReused;
@property (readonly, nonatomic) NSString *appleTimingApp;
@property (readonly, nonatomic) NSString *connectionType;
@property (readonly, nonatomic) NSString *edgeNodeCacheStatus;
@property (readonly, nonatomic) NSString *environmentDataCenter;
@property (readonly, nonatomic) NSString *responseDate;
@property (readonly, nonatomic) unsigned long long statusCode;
@property (readonly, nonatomic) unsigned long long redirectCount;
@property (readonly, nonatomic) unsigned long long requestMessageSize;
@property (readonly, nonatomic) NSString *requestUrl;
@property (readonly, nonatomic) NSString *resolvedIPAddress;
@property (readonly, nonatomic) unsigned long long responseMessageSize;
@property (readonly, nonatomic) double connectionTime;
@property (readonly, nonatomic) double dnsTime;
@property (readonly, nonatomic) double requestTime;
@property (readonly, nonatomic) double responseTime;
@property (readonly, nonatomic) double totalTime;

- (id)humanDescription;
- (id)initWithTransactionMetrics:(id)a0 request:(id)a1 taskIdentifier:(id)a2;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;

@end
