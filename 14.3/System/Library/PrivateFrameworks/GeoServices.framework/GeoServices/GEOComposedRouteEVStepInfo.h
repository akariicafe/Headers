@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int remainingBatteryCharge;
@property (readonly, nonatomic) unsigned int remainingBatteryPercentage;
@property (readonly, nonatomic) double remainingTravelRange;

- (id)init;
- (id)initWithGeoETAStep:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithEVStateInfo:(id)a0;
- (id)initWithGeoStep:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
