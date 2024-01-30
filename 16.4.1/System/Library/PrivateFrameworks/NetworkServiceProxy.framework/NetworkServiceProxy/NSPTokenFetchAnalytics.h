@class NSString;

@interface NSPTokenFetchAnalytics : NSPProxyAnalytics

@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSString *proxyVendor;
@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *authenticationType;
@property (nonatomic) NSString *requestedServerUUID;
@property (nonatomic) unsigned long long requestedTokenCount;
@property (nonatomic) unsigned long long activatedCount;
@property (nonatomic) long long httpCode;
@property (nonatomic) long long nsurlErrorCode;
@property (nonatomic) double latency;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
