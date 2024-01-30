@class NSUUID, SPObservationLocation, NSDate;

@interface SPBeaconObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) SPObservationLocation *location;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBeaconIdentifier:(id)a0 type:(long long)a1 date:(id)a2 location:(id)a3;

@end
