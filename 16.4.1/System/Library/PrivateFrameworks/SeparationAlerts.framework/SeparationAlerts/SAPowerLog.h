@class NSDate, NSMutableSet, NSHashTable;
@protocol SATimeServiceProtocol;

@interface SAPowerLog : NSObject <SAPowerLogServiceProtocol>

@property (retain, nonatomic) id<SATimeServiceProtocol> clock;
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

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)addMonitoredDevice:(id)a0;
- (void)increaseWifiLocationRequestCount;
- (void)increaseGpsLocationRequestCount;
- (void)increaseBTScanCount;
- (void)resetStatistics;
- (void)increaseSeparationAlertsCount:(unsigned long long)a0;
- (void)increaseGeofenceCount;
- (id)initWithClock:(id)a0;
- (void)sendPowerLog;
- (void).cxx_destruct;

@end
