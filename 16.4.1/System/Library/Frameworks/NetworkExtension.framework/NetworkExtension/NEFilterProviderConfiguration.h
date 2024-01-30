@class NSString, NSDictionary, NSURL, NSData;

@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {
    BOOL _controlProviderInitialized;
    NSString *_keychainAccessGroup;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *pluginType;
@property (copy) NSString *dataProviderDesignatedRequirement;
@property (copy) NSString *packetProviderDesignatedRequirement;
@property BOOL disableDefaultDrop;
@property BOOL preserveExistingConnections;
@property (copy) NSURL *dataProviderURL;
@property (copy) NSURL *packetProviderURL;
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

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
