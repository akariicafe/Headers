@class NSDictionary, NSString;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property (getter=isToggleEnabled) BOOL toggleEnabled;
@property (getter=isAllowCaptiveWebSheet) BOOL allowCaptiveWebSheet;
@property (getter=isAllowAllCaptiveNetworkPlugins) BOOL allowAllCaptiveNetworkPlugins;
@property (copy) NSDictionary *interfaceProtocolMapping;
@property (copy) NSString *activeInterfaceProtocolKey;
@property (copy) NSDictionary *serviceExceptions;
@property (copy) NSDictionary *applicationExceptions;
@property (copy) NSDictionary *allowedCaptiveNetworkPlugins;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
