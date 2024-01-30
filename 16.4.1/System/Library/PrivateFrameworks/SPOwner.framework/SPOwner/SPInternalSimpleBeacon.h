@class NSUUID, NSString, SPKeySyncRecord, SPDiscoveredAccessoryProductInformation, SPLostModeInfo, NSSet, NSDictionary, SPBeaconRole, SPHandle;

@interface SPInternalSimpleBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (nonatomic) long long partIdentifier;
@property (nonatomic) BOOL connectionAllowed;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) double txPower;
@property (copy, nonatomic) NSUUID *productUUID;
@property (nonatomic) long long connectableDeviceCount;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) SPKeySyncRecord *keySyncRecord;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) long long batteryLevel;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) SPHandle *owner;
@property (copy, nonatomic) SPBeaconRole *role;
@property (copy, nonatomic) NSSet *safeLocations;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) BOOL isAppleAudioAccessory;
@property (nonatomic) BOOL isZeus;
@property (nonatomic) BOOL canBeLeashedByHost;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) NSString *discoveryId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
