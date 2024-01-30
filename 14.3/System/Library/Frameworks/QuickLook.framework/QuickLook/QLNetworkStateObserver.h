@class NSMutableArray, NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue, QLNetworkStateListener;

@interface QLNetworkStateObserver : NSObject <RadiosPreferencesDelegate, QLNetworkStateListener> {
    unsigned long long _stack;
    NSObject<OS_dispatch_queue> *_queue;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _networkReachabilityContext;
    struct __SCNetworkReachability { } *_reachability;
    int _iCloudDriveReachabilityToken;
    unsigned int _reachabilityFlags;
    RadiosPreferences *_radiosPreferences;
    NSMutableArray *_completionBlocks;
}

@property (readonly, nonatomic) unsigned long long networkState;
@property (retain, nonatomic) id<QLNetworkStateListener> remoteObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)usingRemoteNetworkObserver;
+ (BOOL)networkAccessShouldGoThroughCloudDocsDaemon;

- (void)stopObserving;
- (void)_commonInit;
- (void)updateState:(unsigned long long)a0;
- (id)init;
- (void)_updateRemoteObserver;
- (void)_updateNetworkActivityIndicator;
- (void)_updateNetworkStateWithFlags:(unsigned int)a0;
- (void)_updateNetworkStateWithNotifyToken:(int)a0;
- (void)_unregisterReachability;
- (void)_updateCompletionBlocks;
- (void)setNetworkState:(unsigned long long)a0;
- (void)networkStateWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)startObserving;
- (BOOL)isWifiCapable;
- (BOOL)isConnected;
- (void)_update;
- (void)popOperation;
- (void)pushOperation;
- (void)_setNetworkState:(unsigned long long)a0;

@end
