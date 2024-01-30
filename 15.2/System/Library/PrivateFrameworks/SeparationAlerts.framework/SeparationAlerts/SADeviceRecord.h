@class NSMutableDictionary;

@interface SADeviceRecord : NSObject <NSSecureCoding, SAWithYouDetectorClientProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *deviceRecord;

- (void)_updateLatestAdvertisement:(id)a0;
- (unsigned long long)getWithYouStatus:(id)a0;
- (BOOL)hasDisconnectedDevices;
- (void)_updateDeviceRecordOnDeviceUpdateEvent:(id)a0;
- (void)_updateConnectionStateOnConnectionEvent:(id)a0;
- (long long)getConnectionState:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (void)_updateSingleDeviceRecordForDevice:(id)a0;
- (void)didForceUpdateWithYouStatus;
- (void)encodeWithCoder:(id)a0;
- (id)getAllUUIDs;
- (void)updateLastWithYouDate:(id)a0 forDeviceWithUUID:(id)a1;
- (id)getSADevice:(id)a0;
- (BOOL)hasSurfacedNotificationFor:(id)a0;
- (void)updateLatestAdvertisement:(id)a0 forDeviceWithUUID:(id)a1;
- (id)getLastWithYouDate:(id)a0;
- (void)resetAllWithYouStatus;
- (void)updatedWithYouStatusFrom:(unsigned long long)a0 to:(unsigned long long)a1 forDeviceWithUUID:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_updateAllRelatedDevices;
- (id)initWithCoder:(id)a0;
- (id)getRelatedDevices:(id)a0;
- (unsigned long long)getDeviceNotificationState:(id)a0;
- (id)getLatestAdvertisement:(id)a0;

@end
