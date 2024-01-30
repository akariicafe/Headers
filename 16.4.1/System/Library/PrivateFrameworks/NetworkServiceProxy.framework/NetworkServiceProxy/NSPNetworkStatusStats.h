@class NSString;

@interface NSPNetworkStatusStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (nonatomic) unsigned long long wifiStatusBlockedCount;
@property (nonatomic) unsigned long long wifiStatusDisabledCount;
@property (nonatomic) unsigned long long wifiStatusActiveCount;
@property (nonatomic) unsigned long long cellStatusBlockedCount;
@property (nonatomic) unsigned long long cellStatusDisabledCount;
@property (nonatomic) unsigned long long cellStatusActiveCount;
@property (nonatomic) unsigned long long wiredStatusBlockedCount;
@property (nonatomic) unsigned long long wiredStatusDisabledCount;
@property (nonatomic) unsigned long long wiredStatusActiveCount;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
