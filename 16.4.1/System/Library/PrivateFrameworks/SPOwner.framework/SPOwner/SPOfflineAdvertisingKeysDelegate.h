@class FMXPCServiceDescription, NSString, FMXPCSession, SPBeaconManager, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPBeaconManager *beaconManager;
@property (retain, nonatomic) CBPeripheralManager *peripheralManager;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (nonatomic) BOOL inLowPowerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)peripheralManager:(id)a0 offlineAdvPayloadRequestedWithReason:(long long)a1;
- (id)userAgentProxy;
- (id)userAgentSyncProxy;
- (id)proxy;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)processKeyResponse:(id)a0;
- (id)syncProxy;
- (void)enterLowPowerMode;
- (long long)transformReason:(long long)a0;
- (id)initWithBeaconManager:(id)a0;
- (void).cxx_destruct;

@end
