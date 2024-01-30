@class NIDiscoveryToken, NSString;

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property (nonatomic) float distance;
@property (nonatomic) void /* unknown type, empty encoding */ direction;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } quaternion;
@property (nonatomic) float azimuth;
@property (nonatomic) float elevation;
@property (nonatomic) unsigned long long relationship;
@property (copy) NSString *deviceIdentifer;
@property (nonatomic) double timestamp;
@property (nonatomic) long long distanceMeasurementQuality;
@property (nonatomic) long long motionState;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithToken:(id)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initWithNearbyObject:(id)a0;

@end
