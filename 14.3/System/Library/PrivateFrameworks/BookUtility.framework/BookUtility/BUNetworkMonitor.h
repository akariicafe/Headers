@class RadiosPreferences, NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;

@interface BUNetworkMonitor : NSObject <BUNetworkMonitoring>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath;
@property (retain, nonatomic) RadiosPreferences *radiosPreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasWAPICapability;
- (id)initWithQueue:(id)a0;
- (BOOL)isAirplaneModeEnabled;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)hasCellularCapability;
- (BOOL)isConnected;
- (void)start;
- (BOOL)hasCellularConnection;
- (BOOL)hasWifiConnection;

@end
