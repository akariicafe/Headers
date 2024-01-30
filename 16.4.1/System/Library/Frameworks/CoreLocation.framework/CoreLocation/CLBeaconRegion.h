@class NSUUID, CLBeaconIdentityConstraint, NSNumber;

@interface CLBeaconRegion : CLRegion

@property (readonly, nonatomic) int definitionMask;
@property (readonly, copy, nonatomic) CLBeaconIdentityConstraint *beaconIdentityConstraint;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSUUID *proximityUUID;
@property (readonly, copy, nonatomic) NSNumber *major;
@property (readonly, copy, nonatomic) NSNumber *minor;
@property BOOL notifyEntryStateOnDisplay;

+ (BOOL)supportsSecureCoding;
+ (id)any;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (char)_measuredPowerForDevice;
- (id)initWithBeaconIdentityConstraint:(id)a0 identifier:(id)a1;
- (id)initWithProximityUUID:(id)a0 identifier:(id)a1;
- (id)initWithProximityUUID:(id)a0 major:(unsigned short)a1 identifier:(id)a2;
- (id)initWithProximityUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2 identifier:(id)a3;
- (id)initWithUUID:(id)a0 identifier:(id)a1;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 identifier:(id)a2;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2 identifier:(id)a3;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2 identifier:(id)a3 notifyEntryStateOnDisplay:(BOOL)a4;
- (id)peripheralDataWithMeasuredPower:(id)a0;
- (void)setGutsWithProximityUUID:(id)a0 major:(id)a1 minor:(id)a2 notifyOnDisplay:(BOOL)a3;

@end
