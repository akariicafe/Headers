@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;

- (void)clear;
- (void)_setup;
- (BOOL)isImmediatelyReachable;
- (void)_doCallbackLater;
- (void)_networkManagedUpdated:(id)a0;
- (void)_setupReachability;
- (void)reachabilityDidChange:(id)a0;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void).cxx_destruct;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)_doCallbackNow;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)dealloc;
- (void)goDisconnected;

@end
