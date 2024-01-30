@protocol NPKBluetoothConnectivityCoordinatorDelegate;

@interface NPKBluetoothConnectivityCoordinator : NSObject

@property (nonatomic) unsigned long long bluetoothAvailableAndEnabled;
@property (weak, nonatomic) id<NPKBluetoothConnectivityCoordinatorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isBluetoothEnabled;

@end
