@class NSMapTable, NSObject;
@protocol OS_nw_path, OS_dispatch_source, OS_dispatch_queue, OS_nw_path_monitor;

@interface TPSNetworkPathMonitor : NSObject

@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (nonatomic, getter=isNetworkExpensive) BOOL networkExpensive;
@property (nonatomic) BOOL networkPathMonitorActive;
@property (nonatomic) BOOL shouldNotify;
@property (retain, nonatomic) NSMapTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *notifyTimer;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath;

+ (id)sharedMonitor;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_networkPathUpdated:(id)a0;
- (void)stop;
- (id)init;
- (void)start;
- (id)description;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (BOOL)isNetworkError:(id)a0;
- (void)_cancelPendingNotifications;
- (void)_initializeMonitor;
- (void)_initializeMonitorIfNeeded;
- (void)_notifyObserversWithDelay:(double)a0 usingBlock:(id /* block */)a1;
- (void)_uninitializeMonitor;
- (BOOL)usesCellularConnection;
- (BOOL)usesWifiConnection;

@end
