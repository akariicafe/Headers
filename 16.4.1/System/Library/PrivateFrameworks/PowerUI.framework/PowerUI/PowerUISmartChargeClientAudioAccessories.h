@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface PowerUISmartChargeClientAudioAccessories : NSObject <PowerUISmartChargeClientManagingAudioAccessories>

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void)fakeConnectionForDevice:(id)a0;
- (void)startMockingBluetoothForFakeDevice:(id)a0;
- (void)setFakeConnectionStatusTo:(BOOL)a0;
- (void)dealloc;
- (void)stopMockingBluetooth;
- (void)unfilteredDeadlineForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)isSmartChargingCurrentlyEnabledForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)timeSeriesForDevice:(id)a0;
- (void)fullChargeDeadlineForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)clearLastActionForDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientName:(id)a0;
- (BOOL)disableSmartChargingForDevice:(id)a0 withError:(id *)a1;
- (BOOL)enableSmartChargingForDevice:(id)a0 withError:(id *)a1;
- (unsigned long long)isSmartChargingCurrentlyEnabledForDevice:(id)a0 withError:(id *)a1;
- (BOOL)temporarilyDisableSmartChargingForDevice:(id)a0 withError:(id *)a1;
- (BOOL)connectAndDisableOBCforDevice:(id)a0 withError:(id *)a1;
- (void)connectAndDisableOBCforDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)deleteRecordsForDevice:(id)a0;
- (void)disableSmartChargingForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)enableSmartChargingForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)engageUntil:(id)a0 forDevice:(id)a1 overrideAllSignals:(BOOL)a2;
- (id)fullChargeDeadlineForDevice:(id)a0 withError:(id *)a1;
- (id)getAvailableDevices;
- (id)getStatusForDevice:(id)a0;
- (unsigned long long)lastActionForDevice:(id)a0;
- (id)lastUsedLeewayWithError:(id *)a0;
- (BOOL)setState:(unsigned long long)a0 forDevice:(id)a1 withError:(id *)a2;
- (void)temporarilyDisableSmartChargingForDevice:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)temporarilyEnableChargingForDevice:(id)a0 withError:(id *)a1;
- (void)temporarilyEnableChargingForDevice:(id)a0 withHandler:(id /* block */)a1;
- (id)unfilteredDeadlineForDevice:(id)a0 withError:(id *)a1;
- (BOOL)updateOBCDeadline:(id)a0 forDevice:(id)a1 withError:(id *)a2;
- (void)updateOBCDeadline:(id)a0 forDevice:(id)a1 withHandler:(id /* block */)a2;

@end
