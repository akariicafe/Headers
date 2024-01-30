@class NSString;

@interface BSPlatform : NSObject

@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *productHardwareModel;
@property (readonly, copy, nonatomic) NSString *productHardwareModelName;
@property (readonly, copy, nonatomic) NSString *productClass;
@property (readonly, copy, nonatomic) NSString *localizedProductName;
@property (readonly, copy, nonatomic) NSString *operatingSystemName;
@property (readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) long long homeButtonType;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL internalInstall;
@property (readonly, nonatomic, getter=isDeveloperInstall) BOOL developerInstall;
@property (readonly, nonatomic, getter=isCarrierInstall) BOOL carrierInstall;
@property (readonly, nonatomic, getter=isMultiCore) BOOL multiCore;
@property (readonly, nonatomic) BOOL hasGasGauge;
@property (readonly, nonatomic) BOOL hasOrbCapability;

+ (id)sharedInstance;

@end
