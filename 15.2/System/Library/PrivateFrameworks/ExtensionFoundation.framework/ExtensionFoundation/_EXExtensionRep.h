@class NSString, NSDictionary, NSURL, NSUUID;
@protocol _EXExtensionConfigurationProviding;

@interface _EXExtensionRep : NSObject <_EXExtensionConfigurationProviding, NSSecureCoding, _EXExtensionRepresenting>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *extensionPointConfiguration;
@property (readonly) unsigned long long type;
@property (readonly) NSString *internalServiceName;
@property (readonly) Class principalClass;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) Class connectionHandlerClass;
@property (readonly) NSDictionary *requiredHostEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSURL *url;
@property (readonly) NSURL *containingURL;
@property (readonly) NSUUID *UUID;
@property (readonly) NSURL *executableURL;
@property (readonly) NSDictionary *sdkDictionary;
@property (readonly) NSDictionary *extensionDictionary;
@property (readonly) unsigned int platform;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property (readonly) Class extensionContextClass;
@property (readonly) Class hostContextClass;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *localizedName;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) BOOL requiresMacCatalystBehavior;
@property (readonly) NSDictionary *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)extensionProcessWithError:(id *)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (id)configuration;
- (void)encodeWithCoder:(id)a0;
- (Class)principalClass;
- (BOOL)isEqualToExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (Class)connectionHandlerClass;
- (id)requiredHostEntitlements;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (Class)hostContextClass;
- (Class)extensionContextClass;

@end
