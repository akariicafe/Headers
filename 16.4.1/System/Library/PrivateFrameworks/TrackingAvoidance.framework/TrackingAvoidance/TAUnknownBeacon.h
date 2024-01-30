@class NSUUID, NSData, TAAccessoryInformation;

@interface TAUnknownBeacon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, copy, nonatomic) TAAccessoryInformation *accessoryInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBeaconUUID:(id)a0 address:(id)a1 deviceType:(unsigned long long)a2 withAccessoryInfo:(id)a3;

@end
