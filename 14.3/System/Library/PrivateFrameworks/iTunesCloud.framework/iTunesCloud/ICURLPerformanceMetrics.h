@class NSString;

@interface ICURLPerformanceMetrics : NSObject

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

- (void).cxx_destruct;
- (id)initWithTransactionMetrics:(id)a0 request:(id)a1;

@end
