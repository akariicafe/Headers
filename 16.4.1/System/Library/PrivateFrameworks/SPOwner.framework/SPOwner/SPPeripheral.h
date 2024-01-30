@class NSUUID, NSString, NSDictionary, NSData, NSArray;

@interface SPPeripheral : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *userIdentifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned char partIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL managedByFindMy;
@property (nonatomic) unsigned long long primaryIndex;
@property (copy, nonatomic) NSDictionary *ltkIndexMap;
@property (copy, nonatomic) NSData *lastConnectedLEMAC;
@property (copy, nonatomic) NSArray *allowedSessions;
@property (copy, nonatomic) NSDictionary *longTermKeyMap;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *groupIdentifier;
@property (readonly, copy, nonatomic) NSArray *keyAddressPairs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionForLEMAC:(id)a0;
- (id)initWithUserIdentifier:(id)a0 beaconIdentifier:(id)a1 groupIdentifier:(id)a2 name:(id)a3 partIdentifier:(unsigned char)a4 serialNumber:(id)a5 managedByFindMy:(BOOL)a6 primaryIndex:(unsigned long long)a7 ltkIndexMap:(id)a8 lastConnectedLEMAC:(id)a9 allowedSessions:(id)a10 keyAddressPairs:(id)a11;
- (id)initWithUserIdentifier:(id)a0 beaconIdentifier:(id)a1 groupIdentifier:(id)a2 name:(id)a3 partIdentifier:(unsigned char)a4 serialNumber:(id)a5 managedByFindMy:(BOOL)a6 primaryIndex:(unsigned long long)a7 ltkIndexMap:(id)a8 lastConnectedLEMAC:(id)a9 allowedSessions:(id)a10 longTermKeyMap:(id)a11;

@end
