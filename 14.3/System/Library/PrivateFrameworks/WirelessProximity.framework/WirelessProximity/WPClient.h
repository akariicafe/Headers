@class NSXPCListener, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WPClient : NSObject <NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol>

@property (class, readonly, nonatomic) BOOL isHomePod;
@property (class, readonly, nonatomic) BOOL isAppleTV;
@property (class, readonly, nonatomic) BOOL isHomePodOrIOS;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *daemonDeliveryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *daemonRegisteredSemaphore;
@property (retain, nonatomic) NSString *machName;
@property long long state;
@property long long advertiserState;
@property long long scannerState;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property unsigned char type;
@property BOOL peerTrackingSlotsAvailable;
@property BOOL needsToRegister;
@property BOOL registering;
@property BOOL servicesAdded;
@property (retain) NSXPCListener *xpcListener;
@property BOOL isTestClient;
@property BOOL isBubbleTestClient;
@property long long connectionUseCase;
@property long long maxAllowedConnectionDelayMs;
@property (readonly) long long pipeState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)stateAsString:(long long)a0;
+ (long long)holdVouchers;

- (void)dumpDaemonState;
- (void)disableScanning;
- (void)unregisterEndpoint:(id)a0;
- (void)receivedTestResponse:(id)a0;
- (void)registerForAnyScanResults:(BOOL)a0;
- (void)connectToPeer:(id)a0 withOptions:(id)a1;
- (void)establishConnection;
- (id)initWithQueue:(id)a0 machName:(id)a1;
- (void)stopAdvertising:(id)a0;
- (void)populateClientGATT:(id /* block */)a0;
- (void)enableTestMode;
- (void)peerTrackingFull;
- (void)sendTestRequest:(id)a0;
- (void).cxx_destruct;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)disconnectFromPeer:(id)a0;
- (void)peerTrackingAvailable;
- (void)registerEndpoint:(id)a0 requireAck:(BOOL)a1 requireEncryption:(BOOL)a2;
- (void)stateDidChange:(long long)a0;
- (void)connectToPeer:(id)a0;
- (id)clientAsString;
- (void)dealloc;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)stopTrackingAllZones;
- (void)stopTrackingPeerWithRequest:(id)a0;
- (void)shouldSubscribe:(BOOL)a0 toPeer:(id)a1 withCharacteristic:(id)a2 inService:(id)a3;
- (void)checkAllowDuplicates:(id /* block */)a0;
- (void)stopTrackingZones:(id)a0;
- (void)startScanning:(id)a0;
- (void)listenToBandwidthNotifications;
- (void)getAllTrackedZones;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stopScanning:(id)a0;
- (void)sendDataToCharacteristic:(id)a0 inService:(id)a1 forPeer:(id)a2;
- (void)sendDatatoLePipe:(id)a0 forPeer:(id)a1;
- (void)startTrackingZone:(id)a0;
- (void)enableRanging:(BOOL)a0 reply:(id /* block */)a1;
- (void)getPowerLogStats:(id /* block */)a0;
- (void)discoverCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)isRangingEnabledReply:(id /* block */)a0;
- (void)startAdvertising:(id)a0;
- (void)invalidate;
- (id)connection;
- (void)startTrackingPeerWithRequest:(id)a0;
- (void)setupMachXPCService;
- (void)destroyConnection;
- (void)whitelistConnectionMethods:(id)a0;
- (void)registeredWithDaemonAndContinuingSession:(BOOL)a0;
- (void)enableBubbleTestMode;
- (void)addServices;
- (void)startScanning:(id)a0 andAdvertising:(id)a1;

@end
