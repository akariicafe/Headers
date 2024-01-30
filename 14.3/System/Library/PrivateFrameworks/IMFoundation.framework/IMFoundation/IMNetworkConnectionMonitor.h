@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;

- (void)systemWillSleep;
- (void)clear;
- (void)_setup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_networkManagedUpdated:(id)a0;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)_doCallbackNow;
- (void)reachabilityDidChange:(id)a0;
- (void)systemDidWake;
- (void)_setupReachability;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (BOOL)isImmediatelyReachable;
- (void)_doCallbackLater;

@end
