@class NIDiscoveryToken;

@interface NINearbyPeerConfiguration : NIConfiguration

@property (copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithPeerToken:(id)a0;

@end
