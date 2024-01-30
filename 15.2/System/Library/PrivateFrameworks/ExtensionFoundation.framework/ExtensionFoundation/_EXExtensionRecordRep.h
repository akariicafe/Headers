@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordRep : _EXExtensionRep

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (id)extensionPointIdentifier;
- (id)localizedName;
- (id)url;
- (unsigned int)platform;
- (id)UUID;
- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)entitlements;
- (id)bundleIdentifier;
- (id)attributes;
- (id)extensionDictionary;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)sdkDictionary;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)containingURL;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;

@end
