@class NSString, NSDictionary, NSData;

@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *pluginType;
@property (copy) NSString *dataProviderDesignatedRequirement;
@property (copy) NSString *packetProviderDesignatedRequirement;
@property BOOL controlProviderInitialized;
@property (copy) NSString *keychainAccessGroup;
@property BOOL filterBrowsers;
@property BOOL filterSockets;
@property BOOL filterPackets;
@property (copy) NSDictionary *vendorConfiguration;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSString *organization;
@property (copy) NSData *passwordReference;
@property (copy) NSData *identityReference;
@property (copy) NSString *filterDataProviderBundleIdentifier;
@property (copy) NSString *filterPacketProviderBundleIdentifier;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
