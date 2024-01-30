@class NSString, NSData, WiFiAwareFastDiscoveryConfiguration;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSData *serviceSpecificInfo;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)fastDiscoveryConfigEqual:(id)a0;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1;
- (BOOL)serviceSpecificInfoEqual:(id)a0;

@end
