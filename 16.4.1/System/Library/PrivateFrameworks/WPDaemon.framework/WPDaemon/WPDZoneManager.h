@class CBCentralManager, NSMutableDictionary, NSString, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_source;

@interface WPDZoneManager : WPDManager <CBCentralManagerDelegate>

@property (retain, nonatomic) NSMutableDictionary *trackRequests;
@property (retain, nonatomic) NSMutableDictionary *trackedZones;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_source> *exitTimer;
@property (retain, nonatomic) NSNumber *zoneExitTimeout;
@property (retain, nonatomic) NSDate *lastTimeScannerStarted;
@property (readonly, nonatomic) BOOL scanAllowlisted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (id)generateStateDumpStrings;
- (id)initWithServer:(id)a0;
- (void)unregisterZonesForClient:(id)a0;
- (void)cancelExitTimer;
- (void)unregisterZones:(id)a0 forClient:(id)a1;
- (void)update;
- (void)addSingleZoneTrackingRequest:(id)a0 forClient:(id)a1;
- (void)startExitTimer;
- (BOOL)updateScanner;
- (void)printTrackedZones;
- (void)unregisterZonesForClient:(id)a0 updateScanner:(BOOL)a1;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)getAllZones;
- (void)centralManager:(id)a0 didLoseZone:(id)a1 mask:(id)a2;
- (void).cxx_destruct;
- (void)unregisterAllZones;
- (void)exitTimerFired;
- (id)addZoneTrackingRequest:(id)a0 forClient:(id)a1;

@end
