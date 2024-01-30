@class NSString;

@interface NSPServiceStatusStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (nonatomic) unsigned long long serviceStatusDisabledCount;
@property (nonatomic) unsigned long long serviceStatusActiveCount;
@property (nonatomic) unsigned long long serviceStatusOutageCount;
@property (nonatomic) unsigned long long serviceStatusFraudAlertCount;
@property (nonatomic) unsigned long long serviceStatusUnsupportedRegionCount;
@property (nonatomic) unsigned long long serviceStatusSystemIncompatibleCount;
@property (nonatomic) unsigned long long serviceStatusSubscriberUnsupportedRegionCount;
@property (nonatomic) unsigned long long serviceStatusNetworkOutageCount;

- (id)analyticsDict;
- (void).cxx_destruct;
- (id)eventName;

@end
