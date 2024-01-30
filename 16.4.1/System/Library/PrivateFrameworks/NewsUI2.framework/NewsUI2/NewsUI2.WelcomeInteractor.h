@interface NewsUI2.WelcomeInteractor : NSObject <TSWelcomeDataManagerTypeDelegate, FCNetworkReachabilityObserving, FCAppActivityObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ userTypePromise;
    void /* unknown type, empty encoding */ feedLoadedPromise;
    void /* unknown type, empty encoding */ minimumTimePromise;
    void /* unknown type, empty encoding */ maximumTimePromise;
    void /* unknown type, empty encoding */ isCloudKitReachablePromise;
    void /* unknown type, empty encoding */ minimumTimer;
    void /* unknown type, empty encoding */ maximumTimer;
    void /* unknown type, empty encoding */ appActivityMonitor;
    void /* unknown type, empty encoding */ networkReachability;
}

- (void)activityObservingApplicationDidBecomeActive;
- (void)networkReachabilityDidChange:(id)a0;
- (void)dataManager:(id)a0 error:(long long)a1;
- (void)dataManager:(id)a0 userType:(long long)a1;
- (void)dataManagerFeedPrepared:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
