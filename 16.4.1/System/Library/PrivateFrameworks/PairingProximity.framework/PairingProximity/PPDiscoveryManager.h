@class NSString, CBCentralManager, NSObject;
@protocol OS_dispatch_queue, PPDiscoveryManagerDelegate;

@interface PPDiscoveryManager : NSObject <CBCentralManagerDelegate>

@property (retain, nonatomic) CBCentralManager *central;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (nonatomic) BOOL bluetoothIsScanning;
@property (nonatomic) long long signalLimitOverride;
@property (nonatomic) id<PPDiscoveryManagerDelegate> discoveryDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBluetoothConnected:(long long)a0;
+ (BOOL)isBluetoothPoweredOn:(long long)a0;
+ (id)sharedDiscoveryManager;

- (void)begin;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)end;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)beginDiscovery;
- (void)forceEndDiscovery;
- (void)updateFromBTState:(long long)a0;

@end
