@class NSString;

@interface NSPDeviceIdentityStats : NSPProxyAnalytics

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;

- (id)analyticsDict;
- (void).cxx_destruct;
- (id)eventName;

@end
