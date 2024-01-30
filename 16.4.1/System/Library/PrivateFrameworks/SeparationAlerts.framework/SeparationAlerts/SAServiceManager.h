@class NSDate, SAAnalytics, NSHashTable, NSString, SPBeaconManager, SAAudioAccessory, NSObject, RTRoutineManager, SAService, SPOwnerSession;
@protocol OS_dispatch_queue, SPSeparationMonitoringProtocol;

@interface SAServiceManager : NSObject <SAServiceServiceProtocol, SAServiceClientProtocol> {
    SPBeaconManager *_beaconManager;
    SPOwnerSession *_ownerSession;
    NSObject<SPSeparationMonitoringProtocol> *_separationMonitoringSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) SAService *service;
@property (retain, nonatomic) SAAnalytics *analytics;
@property (retain, nonatomic) SAAudioAccessory *audioAcccessory;
@property (retain, nonatomic) NSDate *nextAnalyticsSubmission;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (nonatomic) BOOL hasAttemptedToIngestLastVisitAtStartup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)convertCLReferenceFrameToSAReferenceFrame:(int)a0;
+ (unsigned long long)convertBeaconToDeviceType:(id)a0;

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)separationAlertsServiceStopBackgroundScanning:(id)a0;
- (void)separationAlertsService:(id)a0 notifySeparationsForDevices:(id)a1 withLocation:(id)a2 withContext:(id)a3;
- (void)separationAlertsService:(id)a0 enableMonitoringForSeparations:(BOOL)a1;
- (void)separationAlertsService:(id)a0 scheduleSATimeEvent:(double)a1 forAlarm:(id)a2;
- (void)separationAlertsServiceStartBackgroundScanning:(id)a0;
- (void)didFetchAllSafeLocations:(id)a0;
- (void)separationAlertsService:(id)a0 cancelSATimeEventForAlarm:(id)a1;
- (void)separationAlertsService:(id)a0 requestBluetoothScanForTypes:(unsigned long long)a1;
- (void)separationAlertsService:(id)a0 removeGeofence:(id)a1;
- (void)dealloc;
- (void)separationAlertsService:(id)a0 addGeofence:(id)a1;
- (void)separationAlertsService:(id)a0 requestStateForRegion:(id)a1;
- (void)separationAlertsServiceStopLongAggressiveScan:(id)a0;
- (void)_ingestVisit:(id)a0;
- (void)_fetchAndIngestLastVisit;
- (void)separationAlertsService:(id)a0 requestLocationForType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)separationAlertsServiceFetchLastVisit:(id)a0;
- (void)didFetchAllDevices:(id)a0;
- (id)initWithQueue:(id)a0;

@end
