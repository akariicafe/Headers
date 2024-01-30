@interface CKDVolumeManager : NSObject

+ (id)volumeUUIDForDeviceID:(id)a0;
+ (void)invalidateVolume:(id)a0;
+ (id)existingVolumeForDevice:(int)a0;
+ (void)shutdownVolumes;
+ (id)createVolumeForDevice:(int)a0 error:(id *)a1;
+ (id)deviceIDForVolumeUUID:(id)a0;
+ (id)_volumeForDisk:(const struct { int x0; unsigned char x1[16]; } *)a0 mountToPath:(id)a1 error:(id *)a2;
+ (void)startVolumes;

@end
