@class NSString;

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL populatesExternalDevice;
@property (readonly, nonatomic) unsigned int features;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL enableThrottling;
@property (nonatomic) BOOL alwaysAllowUpdates;

+ (id)configurationWithEndpointFeatures:(unsigned int)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEndpointFeatures:(unsigned int)a0;

@end
