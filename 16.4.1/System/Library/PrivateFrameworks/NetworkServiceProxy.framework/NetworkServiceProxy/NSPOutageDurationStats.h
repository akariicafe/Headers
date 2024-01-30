@interface NSPOutageDurationStats : NSPProxyAnalytics

@property (nonatomic) unsigned long long outageType;
@property (nonatomic) unsigned long long outageDurationSec;

- (id)eventName;
- (id)analyticsDict;
- (id)outageTypeToString;

@end
