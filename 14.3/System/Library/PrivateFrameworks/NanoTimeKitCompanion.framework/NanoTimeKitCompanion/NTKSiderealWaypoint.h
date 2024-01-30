@interface NTKSiderealWaypoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double degree;
@property (nonatomic) long long type;

+ (long long)_waypointTypeFromSolarEventType:(long long)a0;
+ (id)waypointWithType:(long long)a0 degree:(double)a1;
+ (id)waypointFromSolarEvent:(id)a0;

- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 degree:(double)a1;

@end
