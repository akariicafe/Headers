@class CBCentralManager, NSString, WFClient, NSObject, WFWiFiStateMonitor;
@protocol OS_dispatch_queue;

@interface _TVRUINetworkObserver : NSObject <CBCentralManagerDelegate>

@property (retain, nonatomic) WFWiFiStateMonitor *wifiStateMonitor;
@property (retain, nonatomic) WFClient *wifiClient;
@property (retain, nonatomic) CBCentralManager *bluetoothManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ reachabilityDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving;
- (void)startObserving;
- (void)centralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isNetworkReachable;
- (void)dealloc;
- (void)_wifiStateUpdatedWithOldState:(long long)a0 andNewState:(long long)a1;
- (void)_updateNetworkReachability:(BOOL)a0;

@end
