@class NSString;

@interface NSPConfigurationFetchAnalytics : NSPProxyAnalytics

@property (retain, nonatomic) NSString *configFetchURL;
@property (nonatomic) long long httpCode;
@property (nonatomic) long long nsurlErrorCode;
@property (retain, nonatomic) NSString *requestedServerUUID;
@property (nonatomic) double latency;

- (id)analyticsDict;
- (id)configFetchURLToIndex;
- (void).cxx_destruct;
- (id)eventName;

@end
