@class NSUUID, NSString, NSArray, NSMutableDictionary, NSDictionary, CBPeripheralManager, CBCentralManager, NSObject, WPAdvertisingRequest, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WPDObjectDiscoveryManager : WPDManager <CBPeripheralManagerDelegate, CBCentralManagerDelegate, WPDObjectDiscoveryAdvertiser, WPDObjectDiscoveryScanner>

@property (readonly, weak) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) CBPeripheralManager *peripheralManager;
@property BOOL advertising;
@property (retain) WPAdvertisingRequest *advertRequest;
@property (weak) NSUUID *advertClientUUID;
@property (retain) NSDictionary *advertOptions;
@property unsigned long long advertHash;
@property (readonly, nonatomic) BOOL advWhiteListed;
@property BOOL scanning;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSMutableDictionary *scanRequests;
@property (retain) NSMutableSet *currentScanners;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSObject<OS_dispatch_source> *scanStopTimer;
@property (retain) NSArray *nearbyTokensRequest;
@property (retain) NSArray *matchActionRules;
@property (readonly, nonatomic) BOOL scanWhiteListed;
@property BOOL scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (BOOL)updateAdvertisingOptionsWithError:(id *)a0;
- (id)initWithServer:(id)a0;
- (BOOL)advertOptionsChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateReports:(id)a0 fromReport:(id)a1;
- (void)cleanup;
- (void)cancelScanStopTimer;
- (id)removeAdvertisingRequest:(id)a0 forClient:(id)a1;
- (id)spoofNearOwnerWithPayload:(id)a0;
- (id)addAdvertisingRequest:(id)a0 forClient:(id)a1;
- (void)updateReports:(id)a0 Peripheral:(id)a1 AdvertisementData:(id)a2 RSSI:(id)a3;
- (void)stopAdvertiser;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)peripheralManager:(id)a0 didStopAdvertisingWithError:(id)a1;
- (id)generateStateDump;
- (void)update;
- (void)removeAdvertisingRequestsForClient:(id)a0;
- (void)centralManager:(id)a0 didFailToScanWithError:(id)a1;
- (void)startAdvertiser;
- (id)addScanRequest:(id)a0 forClient:(id)a1;
- (void)resetAdvertiser;
- (void)forceReadADVBuffer:(id)a0;
- (void)removeScanRequestsForClient:(id)a0;
- (void)centralManager:(id)a0 didDiscoverMultiplePeripherals:(id)a1;
- (BOOL)updateScanRules;
- (void)addScanStopTimer;
- (id)updateAdvertiser;
- (void)updateScanner;
- (void)deactivateADVBuffer;
- (id)rulesFromTokens:(id)a0;
- (void)updateClientsWithReports:(id)a0;
- (void)activateADVBuffer;
- (BOOL)changedScanOptions:(id)a0 Clients:(id)a1;
- (void)updateNearbyTokens:(id)a0;
- (id)getScanRequestsForClient:(id)a0;

@end
