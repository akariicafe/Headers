@class NSString;

@interface NSPBadTokenInfoStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *tokenProxy;
@property (nonatomic) unsigned long long configAgeHours;
@property (retain, nonatomic) NSString *configTag;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
