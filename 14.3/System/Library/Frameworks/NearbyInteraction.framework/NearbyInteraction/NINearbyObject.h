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

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNearbyObject:(id)a0;

@end
