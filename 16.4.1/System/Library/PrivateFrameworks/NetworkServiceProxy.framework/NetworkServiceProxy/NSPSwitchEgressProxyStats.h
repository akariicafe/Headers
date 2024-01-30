@class NSString;

@interface NSPSwitchEgressProxyStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) BOOL primaryProxy;
@property (nonatomic) BOOL fallbackProxy;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
