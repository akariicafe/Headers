@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int remainingBatteryCharge;
@property (readonly, nonatomic) unsigned int remainingBatteryPercentage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithEVStateInfo:(id)a0;

@end
