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
- (void)startObserving;
- (void)setNetworkState:(unsigned long long)a0;
- (void)updateState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)airplaneModeChanged;
- (BOOL)isConnected;
- (void)_commonInit;
- (void)_update;
- (void)dealloc;
- (BOOL)isWifiCapable;
- (void)pushOperation;
- (void)popOperation;
- (void)_updateRemoteObserver;
- (void)_updateNetworkActivityIndicator;
- (void)_updateNetworkStateWithFlags:(unsigned int)a0;
- (void)_setNetworkState:(unsigned long long)a0;
- (void)_updateNetworkStateWithNotifyToken:(int)a0;
- (void)_unregisterReachability;
- (void)_updateCompletionBlocks;
- (void)networkStateWithCompletionBlock:(id /* block */)a0;

@end
