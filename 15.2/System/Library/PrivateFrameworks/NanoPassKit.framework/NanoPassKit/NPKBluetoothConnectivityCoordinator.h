@protocol NPKBluetoothConnectivityCoordinatorDelegate;

@interface NPKBluetoothConnectivityCoordinator : NSObject

@property (nonatomic) unsigned long long bluetoothAvailableAndEnabled;
@property (weak, nonatomic) id<NPKBluetoothConnectivityCoordinatorDelegate> delegate;

- (BOOL)isBluetoothEnabled;
- (void).cxx_destruct;
- (id)init;

@end
