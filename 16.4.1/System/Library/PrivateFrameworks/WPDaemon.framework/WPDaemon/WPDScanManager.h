@class CBController, NSString, NSSet, NSMutableDictionary, NSDictionary, CBCentralManager, NSMutableSet, NSObject, NSIndexSet, NSNumber;
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
@property (nonatomic) BOOL isRanging;
@property (readonly, nonatomic) NSIndexSet *rangingTypes;
@property (retain) NSNumber *scanRetainDuplicates;
@property BOOL scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)zonesAvailableForType:(unsigned char)a0;

- (void)cleanup;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (id)generateStateDumpStrings;
- (id)initWithServer:(id)a0;
- (void)enableRanging:(BOOL)a0;
- (void)removePeripheralConnectionsForClient:(id)a0;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (id)removePeerTrackingRequest:(id)a0 checkZonesAvailable:(BOOL)a1 forClient:(id)a2;
- (BOOL)isScannerTestMode;
- (void)logScanTypes:(id)a0 method:(BOOL)a1 window:(long long)a2 interval:(long long)a3;
- (void)logScanRequests:(id)a0 method:(BOOL)a1 window:(long long)a2 interval:(long long)a3;
- (void)addSpyScanClient:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)connectToPeripheral:(id)a0 fromClient:(id)a1 withOptions:(id)a2;
- (void)centralManager:(id)a0 didFindPeripheral:(id)a1 forType:(id)a2;
- (void)centralManager:(id)a0 didLosePeripheral:(id)a1 forType:(id)a2;
- (id)getScanRequestsForClient:(id)a0;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (id)ruleHashesFromScanOptions:(id)a0;
- (void)centralManager:(id)a0 didDiscoverMultiplePeripherals:(id)a1;
- (void)removePeripheralConnection:(id)a0 forClient:(id)a1;
- (void)removeScanRequestsForClient:(id)a0;
- (void)update;
- (id)addScanRequest:(id)a0 forClient:(id)a1;
- (BOOL)updateScanRules;
- (void)updateScanner;
- (void)stopTrackingPeripheral:(id)a0 ofType:(id)a1;
- (void)removeSpyScanClient:(id)a0;
- (void)assertCBDiscoveryScan:(BOOL)a0;
- (void)reconcileScanRule:(id)a0 withRule:(id)a1;
- (id)addPeerTrackingRequest:(id)a0 forClient:(id)a1;
- (void)removeConflictingRequest:(id)a0 forClient:(id)a1;
- (void)removeAllPeerTrackingRequestsForClient:(id)a0;
- (id)scanRequestHashesFromScanRequests:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)retrievePeripheralWithUUID:(id)a0;
- (BOOL)scanOptionsChanged:(id)a0 ForRequests:(id)a1;
- (id)removeScanRequest:(id)a0 forClient:(id)a1;
- (BOOL)heySiriScanActive:(BOOL)a0;
- (void)duplicateRulesGuard:(id)a0 forRule:(id)a1;
- (id)disconnectFromPeripheral:(id)a0 withSubscribedCharacteristics:(id)a1 forClient:(id)a2;
- (void)centralManager:(id)a0 didFailToScanWithError:(id)a1;
- (BOOL)shallStop;
- (void)disconnectFromCentral:(id)a0 forClient:(id)a1;
- (void)clearExistingConnections;
- (BOOL)retainDuplicates;
- (BOOL)startTrackingPeripheral:(id)a0 ofType:(id)a1;
- (void).cxx_destruct;

@end
