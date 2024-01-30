@interface WLKReachabilityMonitor : NSObject

@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void)_reachabilityDidChange:(id)a0;
- (void)_wifiDidChange:(id)a0;

@end
