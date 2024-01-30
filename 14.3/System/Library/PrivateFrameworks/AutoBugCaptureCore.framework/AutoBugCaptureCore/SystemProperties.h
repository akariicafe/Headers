@class NSString, NSNumber;

@interface SystemProperties : NSObject {
    int _dualSIMCapability;
}

@property (nonatomic) BOOL vendorBuild;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) NSString *deviceClassString;
@property (readonly, nonatomic) BOOL basebandCapability;
@property (readonly, nonatomic) BOOL dualSIMCapable;
@property (readonly, nonatomic) BOOL dualSIMEnabled;
@property (readonly, nonatomic) BOOL internalBuild;
@property (readonly, nonatomic) BOOL factoryBuild;
@property (readonly, nonatomic) BOOL seedBuild;
@property (readonly, nonatomic) BOOL carrierBuild;
@property (readonly, nonatomic) BOOL customerBuild;
@property (readonly, nonatomic) BOOL customerSeedBuild;
@property (readonly, nonatomic) BOOL carrierSeedBuild;
@property (readonly, nonatomic) BOOL npiDevice;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *buildVersionPrefix;
@property (readonly, nonatomic) NSString *buildPlatform;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *basebandChipset;
@property (nonatomic) BOOL internalBuildDisabledByOverride;
@property (copy, nonatomic) NSNumber *carrierSeedBuildOverride;
@property (copy, nonatomic) NSNumber *seedBuildOverride;
@property (copy, nonatomic) NSNumber *vendorBuildOverride;
@property (copy, nonatomic) NSNumber *npiDeviceOverride;

+ (id)sharedInstance;
+ (int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)a0;
+ (void)setDeviceConfigTypeForSerialNumber:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)customerSeedBuild;
- (BOOL)carrierSeedBuild;
- (id)description;
- (BOOL)customerBuild;

@end
