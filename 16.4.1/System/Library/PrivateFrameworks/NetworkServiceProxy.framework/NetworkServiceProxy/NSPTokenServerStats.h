@class NSString;

@interface NSPTokenServerStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *tokenServerAddress;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
