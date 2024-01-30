@interface CLRoutePoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double latitude_deg;
@property (readonly, nonatomic) double longitude_deg;
@property (readonly, nonatomic) double altitude_m;
@property (readonly, nonatomic) double odometer_m;
@property (readonly, nonatomic) double timestamp_s;
@property (readonly, nonatomic) int signalEnvironmentType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 odometer:(double)a3 timestamp:(double)a4 signalEnvironmentType:(int)a5;

@end
