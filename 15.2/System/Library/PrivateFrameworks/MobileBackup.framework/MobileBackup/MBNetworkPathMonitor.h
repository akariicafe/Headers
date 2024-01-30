@class MBCellularDataSubscriptionMonitor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_nw_path_monitor;

@interface MBNetworkPathMonitor : NSObject {
    NSObject<OS_nw_path_monitor> *_wifiPathMonitor;
    NSObject<OS_nw_path_monitor> *_wiredPathMonitor;
    NSObject<OS_nw_path_monitor> *_cellularPathMonitor;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _wifiPathState;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _wiredPathState;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _cellularPathState;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _lastUpdateCellularPathState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_group> *initialWiFiStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialWiredStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialCellularStateGroup;
@property (retain) MBCellularDataSubscriptionMonitor *dataSubscriptionMonitor;
@property (copy, nonatomic) id /* block */ networkPathUpdateHandler;
@property (readonly) long long backupOnCellularSupport;

+ (const char *)_pathTypeStringWithPathType:(int)a0;

- (void)_performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (BOOL)_updateState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } *)a0 path:(id)a1 pathType:(int)a2;
- (void)_cancelMonitors;
- (void)start;
- (void)fetchNetworkConnectivityWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleCellularStateChange:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a0 backupOnCellularSupport:(long long)a1;
- (id)init;
- (void)_startCellularMonitor;
- (struct { BOOL x0; BOOL x1; BOOL x2; })networkConnectivity;
- (void)_handleWiFiStateChange;
- (void)dealloc;
- (void)cancel;
- (void)_startWiFiMonitor;

@end
