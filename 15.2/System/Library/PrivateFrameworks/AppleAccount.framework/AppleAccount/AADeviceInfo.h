@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)serialNumber;
+ (id)infoDictionary;
+ (id)osVersion;
+ (id)appleIDClientIdentifier;
+ (id)productVersion;
+ (id)apnsToken;
+ (id)clientInfoHeader;
+ (BOOL)isMultiUserMode;
+ (BOOL)isInternalBuild;
+ (id)udid;
+ (id)userAgentHeader;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)osName;
- (id)deviceColor;
- (id)modelNumber;
- (id)serialNumber;
- (id)storageCapacity;
- (id)osVersion;
- (id)deviceName;
- (id)appleIDClientIdentifier;
- (id)productType;
- (id)deviceClass;
- (id)regionCode;
- (id)productVersion;
- (id)internationalMobileEquipmentIdentity;
- (id)buildVersion;
- (id)mobileEquipmentIdentifier;
- (id)apnsToken;
- (id)deviceHousingColor;
- (id)deviceInfoDictionary;
- (id)wifiMacAddress;
- (id)clientInfoHeader;
- (id)deviceCoverGlassColor;
- (id)deviceEnclosureColor;
- (id)deviceBackingColor;
- (id)uniqueChipIdentifier;
- (id)chipIdentifier;
- (id)udid;
- (id)bluetoothMacAddress;
- (id)userAgentHeader;
- (BOOL)hasCellularCapability;

@end
