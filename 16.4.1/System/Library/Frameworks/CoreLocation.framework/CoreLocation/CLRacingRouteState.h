@interface CLRacingRouteState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double odometer;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double timeSinceStart;
@property (readonly, nonatomic) double offRouteTime;
@property (readonly, nonatomic) double distanceSinceStart;
@property (readonly, nonatomic) double offRouteDistance;
@property (readonly, nonatomic) double averagePace;
@property (readonly, nonatomic) double distanceAlongReference;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 odometer:(double)a3 timestamp:(double)a4 timeSinceStart:(double)a5 offRouteTime:(double)a6 distanceSinceStart:(double)a7 offRouteDistance:(double)a8 averagePace:(double)a9 distanceAlongReference:(double)a10;

@end
