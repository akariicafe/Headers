@interface HKNanoRegistryDeviceUtility : NSObject

+ (id)activePairedDevice;
+ (id)systemBuildVersionForDevice:(id)a0;
+ (id)productTypeForDevice:(id)a0;
+ (unsigned int)systemVersionForDevice:(id)a0;
+ (BOOL)isDeviceSeries4:(id)a0;
+ (id)activePairedDeviceSystemBuildVersion;
+ (id)activePairedDeviceProductType;
+ (BOOL)isDeviceRunningSeed:(id)a0;
+ (BOOL)isDeviceSeries3OrOlder:(id)a0;
+ (id)electrocardiogramV2AvailableRegionsForDevice:(id)a0;

@end
