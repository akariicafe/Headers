@class NSString;

@interface NSPConfigurationFetchAnalytics : NSPProxyAnalytics

@property (retain, nonatomic) NSString *configFetchURL;
@property (nonatomic) long long httpCode;
@property (nonatomic) long long nsurlErrorCode;
@property (retain, nonatomic) NSString *requestedServerUUID;
@property (nonatomic) double latency;
@property (nonatomic) NSString *reason;

- (id)eventName;
- (id)configFetchURLToIndex;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
