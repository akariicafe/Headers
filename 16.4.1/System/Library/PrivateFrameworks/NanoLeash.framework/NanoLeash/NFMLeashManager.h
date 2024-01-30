@class CBScalablePipe, CBCentralManager, CBPeripheral, NSString, NSObject, CBScalablePipeManager;
@protocol NFMLLeashBreakDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate> {
    id /* block */ _proximityChangeHandler;
    NSObject<OS_dispatch_queue> *_centralQueue;
}

@property (nonatomic) BOOL connected;
@property (retain, nonatomic) CBScalablePipeManager *pipeManager;
@property (retain, nonatomic) CBScalablePipe *pipe;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) CBPeripheral *discoveredPeripheral;
@property (nonatomic) long long centralPhase;
@property (nonatomic) BOOL needsToScanForPeripheral;
@property (weak, nonatomic) id<NFMLLeashBreakDelegate> leashDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *leashDispatchSourceTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic) long long leashMode;
@property (copy, nonatomic) NSString *serviceUUID;
@property (copy, nonatomic) NSString *leashIdentifier;
@property (nonatomic) BOOL testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)connect;
- (void)update:(id)a0;
- (void)scalablePipeManager:(id)a0 didUnregisterEndpoint:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)scalablePipeManagerDidUpdateState:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)scalablePipeManager:(id)a0 pipeDidDisconnect:(id)a1 error:(id)a2;
- (void)scalablePipeManager:(id)a0 pipeDidConnect:(id)a1;
- (void)dealloc;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)scalablePipeManager:(id)a0 didRegisterEndpoint:(id)a1 error:(id)a2;
- (void)peripheralDidUpdateRSSI:(id)a0 error:(id)a1;
- (void)beginMonitoringLeash;
- (void)leashTest;
- (void)setProximityChangeHandler:(id /* block */)a0;
- (void)stopMonitoringLeash;

@end
