@class NSUUID;

@interface MNBatteryChargeInfo : NSObject <NSSecureCoding> {
    unsigned long long _legIndex;
    NSUUID *_routeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double batteryChargeRemainingAtEndOfLeg;
@property (readonly, nonatomic) double batteryChargeRemainingAtEndOfRoute;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBatteryChargeRemainingAtEndOfLeg:(double)a0 batteryChargeRemainingAtEndOfRoute:(double)a1 forLegIndex:(unsigned long long)a2 forRouteID:(id)a3;

@end
