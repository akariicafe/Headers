@interface TVPReachabilityMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachability;
}

@property (readonly, nonatomic) unsigned long long networkType;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (void)_reachabilityDidChange:(id)a0;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)_wifiDidChange:(id)a0;

@end
