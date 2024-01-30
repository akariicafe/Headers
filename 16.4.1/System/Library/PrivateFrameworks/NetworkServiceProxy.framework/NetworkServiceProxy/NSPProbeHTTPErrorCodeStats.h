@class NSString, NSNumber;

@interface NSPProbeHTTPErrorCodeStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *interfaceType;
@property (nonatomic) BOOL directPath;
@property (retain, nonatomic) NSNumber *HTTPErrorCode;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
