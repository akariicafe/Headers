@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)osVersion;
+ (id)productVersion;
+ (BOOL)isInternalBuild;
+ (id)udid;
+ (id)infoDictionary;
+ (id)serialNumber;
+ (id)appleIDClientIdentifier;
+ (BOOL)isMultiUserMode;
+ (id)clientInfoHeader;
+ (BOOL)hasiCloudSignOutRestriction;
+ (id)userAgentHeader;
+ (id)apnsToken;

- (id)osVersion;
- (id)productVersion;
- (id)udid;
- (id)deviceName;
- (id)productType;
- (id)serialNumber;
- (id)deviceClass;
- (id)osName;
- (id)wifiMacAddress;
- (id)modelNumber;
- (id)appleIDClientIdentifier;
- (BOOL)hasCellularCapability;
- (id)deviceEnclosureColor;
- (id)uniqueChipIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (id)clientInfoHeader;
- (id)storageCapacity;
- (id)bluetoothMacAddress;
- (id)regionCode;
- (id)chipIdentifier;
- (id)deviceInfoDictionary;
- (id)deviceCoverGlassColor;
- (id)deviceHousingColor;
- (id)deviceBackingColor;
- (id)userAgentHeader;
- (id)deviceColor;
- (id)apnsToken;
- (id)buildVersion;
- (id)mobileEquipmentIdentifier;

@end
