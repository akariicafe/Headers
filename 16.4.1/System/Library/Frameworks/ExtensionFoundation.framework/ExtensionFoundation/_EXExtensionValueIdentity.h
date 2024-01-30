@class NSString, LSBundleRecord, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueIdentity : _EXExtensionIdentity {
    unsigned char _userElection;
    unsigned char _defaultUserElection;
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
    LSBundleRecord *_containingBundleRecord;
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

- (unsigned char)userElection;
- (id)localizedName;
- (id)extensionPointIdentifier;
- (id)initWithCoder:(id)a0;
- (id)extensionDictionary;
- (id)url;
- (id)UUID;
- (id)entitlements;
- (unsigned char)defaultUserElection;
- (unsigned int)platform;
- (id)attributes;
- (id)sdkDictionary;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)bundleIdentifier;
- (id)containingBundleRecord;
- (id)containingURL;
- (void).cxx_destruct;

@end
