@class NSMutableDictionary, TALocationLite;
@protocol SAAnalyticsServiceProtocol, SATimeServiceProtocol;

@interface SADeviceRecord : NSObject <NSSecureCoding, SAWithYouDetectorClientProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SAAnalyticsServiceProtocol> analytics;
@property (retain, nonatomic) NSMutableDictionary *deviceRecord;
@property (retain, nonatomic) TALocationLite *lastLocation;
@property (retain, nonatomic) id<SATimeServiceProtocol> clock;

- (void)updatedWithYouStatusFrom:(unsigned long long)a0 to:(unsigned long long)a1 forDeviceWithUUID:(id)a2;
- (void)ingestTAEvent:(id)a0;
- (void)updateLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)getDeviceNotificationState:(id)a0;
- (id)initWithClock:(id)a0 analytics:(id)a1;
- (id)getLatestNOAdvertisement:(id)a0;
- (id)getLatestWildAdvertisement:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getAllUUIDs;
- (void)_updateSingleDeviceRecordForDevice:(id)a0;
- (id)getLastWithYouDate:(id)a0;
- (unsigned long long)getScenarioClass:(id)a0;
- (void)updateMonitoringSessionState:(unsigned long long)a0 forDeviceWithUUID:(id)a1;
- (id)getSADevice:(id)a0;
- (void)_updateConnectionStateOnConnectionEvent:(id)a0;
- (void)_updateLatestAdvertisement:(id)a0;
- (id)getLastCompanionDisconnectionDate:(id)a0;
- (void)_updateDeviceRecordOnDeviceUpdateEvent:(id)a0;
- (void)didForceUpdateWithYouStatus;
- (BOOL)hasDisconnectedDevices;
- (void)updateLatestAdvertisement:(id)a0 forDeviceWithUUID:(id)a1;
- (void)_updateAllRelatedDevices;
- (long long)getConnectionState:(id)a0;
- (id)getRelatedDevices:(id)a0;
- (unsigned long long)getMonitoringSessionState:(id)a0;
- (void)updateLastWithYouLocation:(id)a0 forDeviceWithUUID:(id)a1;
- (void)updateScenario:(unsigned long long)a0 forDeviceWithUUID:(id)a1;
- (void)updateLastWithYouDate:(id)a0 forDeviceWithUUID:(id)a1;
- (id)getLastWithYouLocation:(id)a0;
- (void)resetAllWithYouStatus;
- (unsigned long long)getWithYouStatus:(id)a0;
- (id)getLatestAdvertisement:(id)a0;
- (BOOL)hasSurfacedNotificationFor:(id)a0;
- (void).cxx_destruct;

@end
