@class WPDZoneManager, NSMutableDictionary, WPDPersistence, NSMapTable, NSObject, WPDObjectDiscoveryManager, WPDState, NSString, WPDStatsManager, WPDScanManager, WPDPipeManager, NSMutableSet, WPDAdvertisingManager, NSArray, NSXPCListener, WPDClient;
@protocol OS_dispatch_queue;

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) WPDState *wpdState;
@property (nonatomic) long long cbState;
@property unsigned char coreBluetoothState;
@property (retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) WPDScanManager *scanManager;
@property (retain) WPDAdvertisingManager *advertisingManager;
@property (retain) WPDZoneManager *zoneManager;
@property (retain) WPDPipeManager *pipeManager;
@property (retain) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDClient *spObjectDiscoveryClient;
@property (retain) WPDPersistence *persistence;
@property (retain, nonatomic) NSArray *managers;
@property (retain, nonatomic) WPDStatsManager *statsManager;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSMutableSet *testClients;
@property (retain) NSMutableSet *privilegedClients;
@property (retain) NSMapTable *clientsWithMach;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long stateCaptureHandle;
@property (nonatomic) int lockStatusChangedToken;
@property (nonatomic) int screenStateToken;
@property (nonatomic) int firstUnlockStatusChangedToken;
@property BOOL screenOff;
@property BOOL systemLocked;
@property BOOL isTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isAppleTV;
+ (BOOL)isHomePod;

- (void)dumpDaemonState;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)notifyManagersOfStateChange;
- (BOOL)isRangingEnabled;
- (void)enableTestMode:(BOOL)a0;
- (void)registerClient:(id)a0 withMachName:(id)a1 withCompletion:(id /* block */)a2;
- (void)enableTestMode;
- (id)init;
- (void)updateState;
- (void).cxx_destruct;
- (void)screenStateUpdate;
- (void)initClients;
- (void)notifyClientsOfStateChange;
- (void)cbManagerDidUpdateState:(id)a0;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)dumpToLog:(BOOL)a0 State:(BOOL)a1;
- (void)dealloc;
- (BOOL)isClientTestMode:(id)a0;
- (void)initManagers;
- (id)generateStateDump;
- (id)getClientForUUID:(id)a0;
- (void)startListening;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)getAllClients;
- (void)disableScanningForClient:(id)a0;
- (id)clientForMachName:(id)a0;
- (void)lockStateUpdate;
- (void)enableRanging:(BOOL)a0;
- (void)registerForSpringboardNotifications;

@end
