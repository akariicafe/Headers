@interface CKDVolumeManager : NSObject

+ (void)initialize;
+ (id)volumeUUIDForDeviceID:(id)a0;
+ (void)_rebuildVolumes;
+ (id)volumeForVolumeUUID:(id)a0;
+ (id)deviceIDForVolumeUUID:(id)a0;
+ (id)volumeForDeviceID:(id)a0;

@end
