@protocol MNVehicleMonitorDelegate;

@interface MNVehicleMonitor : NSObject {
    int _vehicleConnectedToken;
    int _vehicleDisconnectedToken;
    BOOL _isMonitoring;
}

@property (weak, nonatomic) id<MNVehicleMonitorDelegate> delegate;

- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)dealloc;

@end
