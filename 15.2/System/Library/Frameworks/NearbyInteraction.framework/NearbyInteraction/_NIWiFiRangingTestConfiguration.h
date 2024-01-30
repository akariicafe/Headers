@class NIDiscoveryToken, NSDictionary, NSArray;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration

@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initWithDiscoveryToken:(id)a0 wifiRangingParameters:(id)a1 regions:(id)a2;

@end
