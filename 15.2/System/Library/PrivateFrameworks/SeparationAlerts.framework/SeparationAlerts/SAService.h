@class SATime, SAMonitoringSessionManager, NSHashTable, SADeviceRecord, SAFenceManager, SAPersistenceManager, NSString, SATravelTypeClassifier, SAPowerLog, SAWithYouDetector;

@interface SAService : NSObject <SAMonitoringSessionManagerClientProtocol, SAFenceManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SAGeoFenceRequestProtocol, SABluetoothScanRequestProtocol, SALocationRequestProtocol, SATimeEventRequestProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) SATime *clock;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (retain, nonatomic) SAWithYouDetector *withYouDetector;
@property (retain, nonatomic) SAMonitoringSessionManager *monitoringSessionManager;
@property (retain, nonatomic) SAFenceManager *fenceManager;
@property (retain, nonatomic) SATravelTypeClassifier *travelTypeClassifier;
@property (retain, nonatomic) SAPowerLog *powerLogger;
@property (retain, nonatomic) SAPersistenceManager *persistenceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestBluetoothScanForTypes:(unsigned long long)a0;
- (void)addGeofence:(id)a0;
- (void)removeClient:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (void)notifySeparationsForDevices:(id)a0 withLocation:(id)a1 withContext:(id)a2;
- (void)requestLocationForType:(unsigned long long)a0;
- (id)initWithAnalytics:(id)a0;
- (void)fetchLastVisit;
- (void)cancelSATimeEventForAlarm:(id)a0;
- (void)enableMonitoringForSeparations:(BOOL)a0;
- (void).cxx_destruct;
- (void)scheduleSATimeEvent:(double)a0 forAlarm:(id)a1;
- (void)startBackgroundScanning;
- (void)addClient:(id)a0;
- (void)stopBackgroundScanning;
- (void)updatedMonitoringState:(unsigned long long)a0 forDeviceUUID:(id)a1;
- (void)removeGeofence:(id)a0;

@end
