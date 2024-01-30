@class NIDiscoveryToken;

@interface NINearbyPeerConfiguration : NIConfiguration

@property (copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (nonatomic, getter=isLongRangeEnabled) BOOL longRangeEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initWithPeerToken:(id)a0;

@end
