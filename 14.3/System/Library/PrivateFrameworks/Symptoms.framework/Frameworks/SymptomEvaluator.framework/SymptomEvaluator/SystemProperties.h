@class NSString, NSNumber;

@interface SystemProperties : NSObject

@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) NSString *deviceClassString;
@property (readonly, nonatomic) BOOL basebandCapability;
@property (readonly, nonatomic) int dualSIMCapability;
@property (readonly, nonatomic) BOOL internalBuild;
@property (readonly, nonatomic) BOOL vendorBuild;
@property (readonly, nonatomic) BOOL seedBuild;
@property (readonly, nonatomic) BOOL carrierBuild;
@property (readonly, nonatomic) BOOL customerSeedBuild;
@property (readonly, nonatomic) BOOL carrierSeedBuild;
@property (readonly, nonatomic) BOOL npiDevice;
@property (readonly, nonatomic) BOOL isSymptomsdHelper;
@property (readonly, nonatomic) BOOL largeBasebandLogs;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *buildVersionPrefix;
@property (readonly, nonatomic) NSString *buildPlatform;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *basebandChipset;
@property (readonly, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL internalBuildDisabledByOverride;
@property (copy, nonatomic) NSNumber *carrierSeedBuildOverride;
@property (copy, nonatomic) NSNumber *seedBuildOverride;
@property (copy, nonatomic) NSNumber *vendorBuildOverride;

+ (id)sharedInstance;
+ (unsigned long long)retrieveDeviceConfigTypePreferenceForKey:(struct __CFString { } *)a0;
+ (void)deleteDeviceConfigTypePreferenceForKey:(struct __CFString { } *)a0;
+ (int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)a0;
+ (void)setDeviceConfigTypeForSerialNumber:(id)a0;
+ (void)saveDeviceConfigType:(unsigned long long)a0 forKey:(struct __CFString { } *)a1;
+ (unsigned long long)retrieveDeviceConfigTypeForKey:(struct __CFString { } *)a0;
+ (unsigned long long)retrieveDeviceConfigTypePreference;
+ (void)deleteDeviceConfigTypePreference;

- (id)init;
- (void).cxx_destruct;
- (BOOL)customerSeedBuild;
- (BOOL)carrierSeedBuild;
- (id)description;
- (const char *)dualSIMCapabilityString;
- (void)refreshDualSIMCapability;
- (int)getDualSIMCapabilityFromCoreTelephony;

@end
