@class NSUUID, NSString, NSDate, SPDiscoveredAccessoryProductInformation, NSSet, SPLostModeInfo, NSDictionary, SPHandle, SPBeaconRole;

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) SPHandle *SPOwner;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (nonatomic) long long partIdentifier;
@property (copy, nonatomic) NSString *stableIdentifier;
@property (copy, nonatomic) SPHandle *owner;
@property (nonatomic) BOOL accepted;
@property (copy, nonatomic) NSDate *pairingDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) SPBeaconRole *role;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSSet *shares;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) NSString *correlationIdentifier;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSUUID *productUUID;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL isZeus;
@property (nonatomic) BOOL canBeLeashedByHost;
@property (nonatomic) BOOL connectionAllowed;
@property (nonatomic) long long connectableDeviceCount;
@property (copy, nonatomic) NSDate *connectedStateExpiryDate;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) NSString *separationState;
@property (nonatomic) long long beaconSeparationState;
@property (copy, nonatomic) NSSet *safeLocations;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSSet *locationProviders;
@property (nonatomic) unsigned long long keySyncLastObservedIndex;
@property (copy, nonatomic) NSDate *keySyncLastIndexObservationDate;
@property (nonatomic) unsigned long long keySyncWildIndexFallback;
@property (nonatomic) unsigned long long keyAlignmentLastObservedIndex;
@property (copy, nonatomic) NSDate *keyAlignmentLastIndexObservationDate;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (nonatomic) BOOL isAppleAudioAccessory;
@property (nonatomic) long long batteryLevel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
