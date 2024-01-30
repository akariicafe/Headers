@class CBController, NSString, NSSet, NSMutableDictionary, NSDictionary, CBCentralManager, NSMutableSet, NSObject, NSIndexSet;
@protocol OS_dispatch_queue;

@interface WPDScanManager : WPDManager <CBCentralManagerDelegate>

@property (retain) NSMutableDictionary *scanRequests;
@property (retain) NSMutableDictionary *peerRequests;
@property (retain) NSMutableDictionary *connectionsInProgress;
@property (retain) NSMutableSet *peripheralConnections;
@property (retain) NSIndexSet *currentScanners;
@property (retain) CBCentralManager *centralManager;
@property (retain) CBController *cbDiscoveryAsserter;
@property BOOL scanning;
@property (retain) NSMutableSet *spyScanClients;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSSet *scanRequestHashes;
@property (retain) NSSet *scanRuleHashes;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *centralQueue;
@property (nonatomic) BOOL isRanging;
@property (readonly, nonatomic) NSIndexSet *rangingTypes;
@property BOOL scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)zonesAvailableForType:(unsigned char)a0;

- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)duplicateRulesGuard:(id)a0 forRule:(id)a1;
- (id)initWithServer:(id)a0;
- (void)removeSpyScanClient:(id)a0;
- (void)logScanRequests:(id)a0 method:(BOOL)a1 window:(long long)a2 interval:(long long)a3;
- (void).cxx_destruct;
- (void)stopTrackingPeripheral:(id)a0 ofType:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)cleanup;
- (void)reconcileScanRule:(id)a0 withRule:(id)a1;
- (void)assertCBDiscoveryScan:(BOOL)a0;
- (void)clearExistingConnections;
- (id)removeScanRequest:(id)a0 forClient:(id)a1;
- (BOOL)startTrackingPeripheral:(id)a0 ofType:(id)a1;
- (void)centralManager:(id)a0 didLosePeripheral:(id)a1 forType:(id)a2;
- (id)retrievePeripheralWithUUID:(id)a0;
- (id)generateStateDump;
- (void)update;
- (void)addSpyScanClient:(id)a0;
- (id)disconnectFromPeripheral:(id)a0 withSubscribedCharacteristics:(id)a1 forClient:(id)a2;
- (id)addPeerTrackingRequest:(id)a0 forClient:(id)a1;
- (void)disconnectFromCentral:(id)a0 forClient:(id)a1;
- (void)centralManager:(id)a0 didFailToScanWithError:(id)a1;
- (id)addScanRequest:(id)a0 forClient:(id)a1;
- (void)removeAllPeerTrackingRequestsForClient:(id)a0;
- (id)connectToPeripheral:(id)a0 fromClient:(id)a1 withOptions:(id)a2;
- (void)removeConflictingRequest:(id)a0 forClient:(id)a1;
- (void)logScanTypes:(id)a0 method:(BOOL)a1 window:(long long)a2 interval:(long long)a3;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (BOOL)heySiriScanActive:(BOOL)a0;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)removePeripheralConnectionsForClient:(id)a0;
- (void)removeScanRequestsForClient:(id)a0;
- (void)centralManager:(id)a0 didDiscoverMultiplePeripherals:(id)a1;
- (BOOL)updateScanRules;
- (BOOL)scanOptionsChanged:(id)a0 ForRequests:(id)a1;
- (void)updateScanner;
- (void)removePeripheralConnection:(id)a0 forClient:(id)a1;
- (void)enableRanging:(BOOL)a0;
- (void)centralManager:(id)a0 didFindPeripheral:(id)a1 forType:(id)a2;
- (id)scanRequestHashesFromScanRequests:(id)a0;
- (id)ruleHashesFromScanOptions:(id)a0;
- (id)removePeerTrackingRequest:(id)a0 checkZonesAvailable:(BOOL)a1 forClient:(id)a2;
- (BOOL)isScannerTestMode;
- (id)getScanRequestsForClient:(id)a0;

@end
