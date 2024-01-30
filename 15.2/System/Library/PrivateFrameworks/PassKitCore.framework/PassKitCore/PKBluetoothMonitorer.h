@class NSString, CBCentralManager;
@protocol PKBluetoothMonitorerDelegate;

@interface PKBluetoothMonitorer : NSObject <CBCentralManagerDelegate> {
    CBCentralManager *_bluetoothManager;
}

@property (nonatomic) long long state;
@property (weak, nonatomic) id<PKBluetoothMonitorerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManagerOptions:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;

@end
