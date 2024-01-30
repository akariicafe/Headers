@class CUTDeferredTaskQueue, IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;
@property (readonly, nonatomic) CUTDeferredTaskQueue *performCallbackTask;

- (void)systemWillSleep;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)_doCallbackNow;
- (BOOL)isImmediatelyReachable;
- (void)_setupReachability;
- (void)systemDidWake;
- (void)_setup;
- (void)_networkManagedUpdated:(id)a0;
- (void)dealloc;
- (void)_doCallbackLater;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void)clear;
- (void).cxx_destruct;
- (void)reachabilityDidChange:(id)a0;

@end
