@class AnalyticsStoreMOHandler;

@interface LinkChangePolicyHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler;

- (void).cxx_destruct;
- (void)setLinkChange:(BOOL)a0 ssid:(id)a1 bssid:(id)a2 reason:(unsigned long long)a3 subReason:(unsigned long long)a4 rssi:(long long)a5;
- (id)initWithAnalyticsStore:(id)a0;

@end
