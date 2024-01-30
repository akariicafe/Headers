@class NSString, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueRep : _EXExtensionRep {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
    NSUUID *_UUID;
    NSString *_localizedName;
    NSURL *_url;
    NSURL *_containingURL;
    NSDictionary *_sdkDictionary;
    NSDictionary *_extensionDictionary;
    NSDictionary *_attributes;
    NSDictionary *_entitlements;
}

+ (BOOL)supportsSecureCoding;

- (id)extensionPointIdentifier;
- (id)localizedName;
- (id)url;
- (unsigned int)platform;
- (id)UUID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)entitlements;
- (id)bundleIdentifier;
- (id)attributes;
- (id)extensionDictionary;
- (id)sdkDictionary;
- (id)containingURL;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;

@end
