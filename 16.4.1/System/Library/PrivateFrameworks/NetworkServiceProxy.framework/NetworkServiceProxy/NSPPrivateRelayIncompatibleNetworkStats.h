@class NSString;

@interface NSPPrivateRelayIncompatibleNetworkStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *interfaceType;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
