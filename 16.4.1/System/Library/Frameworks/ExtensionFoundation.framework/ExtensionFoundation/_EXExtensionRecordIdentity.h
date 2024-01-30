@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordIdentity : _EXExtensionIdentity

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (unsigned char)userElection;
- (id)localizedName;
- (id)extensionPointIdentifier;
- (id)initWithCoder:(id)a0;
- (id)extensionDictionary;
- (Class)classForCoder;
- (id)url;
- (id)UUID;
- (id)extensionSettingsKey;
- (id)entitlements;
- (unsigned char)defaultUserElection;
- (unsigned int)platform;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)attributes;
- (id)sdkDictionary;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)bundleIdentifier;
- (id)initWithPlugInKitProxy:(id)a0;
- (BOOL)setUserElection:(unsigned char)a0 error:(id *)a1;
- (id)containingBundleRecord;
- (id)containingURL;
- (void).cxx_destruct;

@end
