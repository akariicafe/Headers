@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration;
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;

- (id)initWithServiceType:(long long)a0 securityConfiguration:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;
- (BOOL)securityConfigurationEqual:(id)a0;

@end
