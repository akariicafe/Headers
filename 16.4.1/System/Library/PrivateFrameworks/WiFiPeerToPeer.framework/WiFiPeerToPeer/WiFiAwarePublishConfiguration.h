@class WiFiAwareInternetSharingConfiguration, NSString, WiFiAwarePublishServiceSpecificInfo, WiFiAwarePublishDatapathConfiguration, WiFiAwareFastDiscoveryConfiguration;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic) BOOL furtherServiceDiscoveryRequired;
@property (nonatomic) BOOL jumboServiceDiscoveryMessages;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration;
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServiceName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)datapathConfigurationEqual:(id)a0;
- (BOOL)fastDiscoveryConfigurationEqual:(id)a0;
- (BOOL)internetSharingConfigurationEqual:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;

@end
