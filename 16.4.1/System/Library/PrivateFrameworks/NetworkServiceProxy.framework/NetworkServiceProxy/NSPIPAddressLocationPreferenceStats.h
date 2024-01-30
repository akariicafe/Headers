@class NSString;

@interface NSPIPAddressLocationPreferenceStats : NSPProxyAnalytics

@property (nonatomic) unsigned long long locationPreference;
@property (retain, nonatomic) NSString *tierType;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
