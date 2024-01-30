@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface FLNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
    BOOL _isNetworkReachable;
    BOOL _isWiFiEnabled;
}

@property (readonly) BOOL isNetworkReachable;
@property (readonly) BOOL isAirplaneModeActiveWithoutWiFi;

+ (id)sharedNetworkObserver;

- (id)init;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (void)_networkReachabilityDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isWiFiEnabled;
- (void)disableAirplaneMode;
- (id)_init;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (id)addNetworkReachableBlock:(id /* block */)a0;

@end
