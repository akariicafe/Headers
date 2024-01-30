@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)udid;
+ (id)productVersion;
+ (BOOL)isInternalBuild;
+ (id)appleIDClientIdentifier;
+ (id)infoDictionary;
+ (id)serialNumber;
+ (BOOL)isMultiUserMode;
+ (id)osVersion;
+ (id)apnsToken;
+ (id)userAgentHeader;
+ (id)clientInfoHeader;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)udid;
- (id)mobileEquipmentIdentifier;
- (id)deviceColor;
- (id)productVersion;
- (id)deviceName;
- (id)deviceClass;
- (id)regionCode;
- (id)chipIdentifier;
- (id)deviceCoverGlassColor;
- (id)productType;
- (id)internationalMobileEquipmentIdentity;
- (id)modelNumber;
- (id)deviceHousingColor;
- (id)deviceEnclosureColor;
- (id)buildVersion;
- (id)wifiMacAddress;
- (id)storageCapacity;
- (id)appleIDClientIdentifier;
- (id)deviceInfoDictionary;
- (id)serialNumber;
- (id)deviceBackingColor;
- (id)osName;
- (id)osVersion;
- (id)apnsToken;
- (BOOL)hasCellularCapability;
- (id)bluetoothMacAddress;
- (id)uniqueChipIdentifier;
- (id)userAgentHeader;
- (id)clientInfoHeader;

@end
