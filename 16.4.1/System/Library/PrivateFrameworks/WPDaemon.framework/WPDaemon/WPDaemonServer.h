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
@property (nonatomic) int lockStatusChangedToken;
@property (nonatomic) int screenStateToken;
@property (nonatomic) int firstUnlockStatusChangedToken;
@property BOOL screenOff;
@property BOOL systemLocked;
@property BOOL isTesting;
@property (nonatomic) int gazeChangeToken;
@property BOOL onHead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)supportsRanging;
+ (BOOL)isHomePod;
+ (BOOL)isInternalBuild;
+ (BOOL)isAppleTV;

- (void)addClient:(id)a0;
- (void)startListening;
- (BOOL)scanWithRetainDuplicates;
- (void)removeClient:(id)a0;
- (void)enableRanging:(BOOL)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)initClients;
- (void)notifyClientsOfStateChange;
- (BOOL)isClientTestMode:(id)a0;
- (void)initManagers;
- (void)enableTestMode;
- (BOOL)isRangingEnabled;
- (void)screenStateUpdate;
- (void)generateStateDump;
- (id)getClientForUUID:(id)a0;
- (void)lockStateUpdate;
- (void)dumpDaemonState;
- (void)dumpDaemonStateAsync;
- (id)clientForMachName:(id)a0;
- (id)getAllClients;
- (void)dealloc;
- (void)notifyManagersOfStateChange;
- (void)enableTestMode:(BOOL)a0;
- (void)registerClient:(id)a0 withMachName:(id)a1 withCompletion:(id /* block */)a2;
- (id)init;
- (void)registerForSpringboardNotifications;
- (void)disableScanningForClient:(id)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)SetupSignalHandler;
- (void)cbManagerDidUpdateState:(id)a0;

@end
