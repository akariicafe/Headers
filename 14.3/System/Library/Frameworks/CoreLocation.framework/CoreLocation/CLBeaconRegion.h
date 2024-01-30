@class NSUUID, CLBeaconIdentityConstraint, NSNumber;

@interface CLBeaconRegion : CLRegion

@property (readonly, copy, nonatomic) CLBeaconIdentityConstraint *beaconIdentityConstraint;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSUUID *proximityUUID;
@property (readonly, copy, nonatomic) NSNumber *major;
@property (readonly, copy, nonatomic) NSNumber *minor;
@property (nonatomic) BOOL notifyEntryStateOnDisplay;

+ (BOOL)supportsSecureCoding;
+ (id)any;

- (id)init;
- (id)initWithUUID:(id)a0 identifier:(id)a1;
- (id)initWithProximityUUID:(id)a0 major:(unsigned short)a1 identifier:(id)a2;
- (id)initWithBeaconIdentityConstraint:(id)a0 identifier:(id)a1;
- (id)initWithProximityUUID:(id)a0 identifier:(id)a1;
- (void)setGutsWithProximityUUID:(id)a0 major:(id)a1 minor:(id)a2 notifyOnDisplay:(BOOL)a3;
- (id)initWithIdentifier:(id)a0;
- (id)initWithProximityUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2 identifier:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 identifier:(id)a2;
- (id)description;
- (char)_measuredPowerForDevice;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2 identifier:(id)a3;
- (id)peripheralDataWithMeasuredPower:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
