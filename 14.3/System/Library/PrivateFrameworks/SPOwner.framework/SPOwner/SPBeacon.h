@class NSUUID, NSString, NSDate, SPDiscoveredAccessoryProductInformation, NSSet, SPLostModeInfo, NSDictionary, SPHandle, SPBeaconRole;

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) SPHandle *SPOwner;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
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
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldLeash;
@property (nonatomic) BOOL shouldMaintainPersistentConnection;
@property (nonatomic) BOOL connectionAllowed;
@property (nonatomic) long long connectableDeviceCount;
@property (copy, nonatomic) NSDate *connectedStateExpiryDate;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) NSString *separationState;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSSet *locationProviders;
@property (nonatomic) unsigned long long keySyncLastObservedIndex;
@property (copy, nonatomic) NSDate *keySyncLastIndexObservationDate;
@property (nonatomic) unsigned long long keyAlignmentLastObservedIndex;
@property (copy, nonatomic) NSDate *keyAlignmentLastIndexObservationDate;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (nonatomic) long long batteryLevel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
