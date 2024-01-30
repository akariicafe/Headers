@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiAwarePublishDatapathConfiguration;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic) BOOL furtherServiceDiscoveryRequired;
@property (nonatomic) BOOL jumboServiceDiscoveryMessages;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;
- (BOOL)datapathConfigurationEqual:(id)a0;

@end
