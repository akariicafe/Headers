@class NSDate, NSMutableSet, NSHashTable;

@interface SAPowerLog : NSObject <SAPowerLogServiceProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) NSDate *startTimestamp;
@property (nonatomic) unsigned long long visitCount;
@property (nonatomic) double totalVisitDuration;
@property (nonatomic) unsigned long long btScanCount;
@property (nonatomic) unsigned long long geofenceCount;
@property (nonatomic) unsigned long long gpsLocationRequestCount;
@property (nonatomic) unsigned long long wifiLocationRequestCount;
@property (nonatomic) unsigned long long separationAlertsCount;
@property (retain, nonatomic) NSMutableSet *monitoredDevices;

- (void)removeClient:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (void)resetStatistics;
- (void)sendPowerLog;
- (void)increaseGpsLocationRequestCount;
- (void).cxx_destruct;
- (id)init;
- (void)increaseBTScanCount;
- (void)addClient:(id)a0;
- (void)increaseSeparationAlertsCount:(unsigned long long)a0;
- (void)increaseWifiLocationRequestCount;
- (void)addMonitoredDevice:(id)a0;
- (void)increaseGeofenceCount;

@end
