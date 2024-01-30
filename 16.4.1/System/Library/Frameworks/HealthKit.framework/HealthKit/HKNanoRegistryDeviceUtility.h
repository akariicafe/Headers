@class NSString;

@interface HKNanoRegistryDeviceUtility : NSObject

@property (class, readonly, copy, nonatomic) NSString *activePairedDeviceModelNumber;
@property (class, readonly, copy, nonatomic) NSString *activePairedDeviceRegionInfo;
@property (class, readonly, copy, nonatomic) NSString *activePairedDeviceHousingColor;

+ (id)activePairedDeviceProductType;
+ (id)activeNonFamilySetupDevice;
+ (id)activePairedDeviceSystemBuildVersion;
+ (id)deviceHousingColor:(id)a0;
+ (id)electrocardiogramV2AvailableRegionsForDevice:(id)a0;
+ (BOOL)isDeviceRunningKnownSeedBuildsWhereElectrocardiogramAndIrregularRhythmNotificationCountryRolloutsWereHidden:(id)a0;
+ (BOOL)isDeviceSeries3OrOlder:(id)a0;
+ (BOOL)isDeviceSeries4:(id)a0;
+ (id)modelNumberForDevice:(id)a0;
+ (id)productTypeForDevice:(id)a0;
+ (id)regionInfoForDevice:(id)a0;
+ (id)systemBuildVersionForDevice:(id)a0;
+ (unsigned int)systemVersionForDevice:(id)a0;

@end
