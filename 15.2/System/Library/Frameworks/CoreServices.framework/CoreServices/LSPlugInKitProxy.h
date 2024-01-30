@class LSExtensionPoint, NSString, NSUUID, NSDate, LSApplicationExtensionRecord, NSDictionary, LSBundleProxy, NSNumber;

@interface LSPlugInKitProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {
    unsigned int _platform;
    unsigned int _pluginFlags;
    LSApplicationExtensionRecord *_appexRecord;
    NSString *_extensionPointID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSString *protocol;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSUUID *pluginUUID;
@property (readonly, nonatomic) NSDictionary *pluginKitDictionary;
@property (readonly, nonatomic) NSDictionary *infoPlist;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic) LSBundleProxy *containingBundle;
@property (readonly, nonatomic, getter=isOnSystemPartition) BOOL onSystemPartition;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) BOOL pluginCanProvideIcon;
@property (readonly, nonatomic) LSExtensionPoint *extensionPoint;

+ (id)pluginKitProxyForURL:(id)a0;
+ (id)plugInKitProxyForUUID:(id)a0 bundleIdentifier:(id)a1 pluginIdentifier:(id)a2 effectiveIdentifier:(id)a3 version:(id)a4 bundleURL:(id)a5;
+ (id)plugInKitProxyForPlugin:(unsigned int)a0 withContext:(struct LSContext { id x0; } *)a1 applicationExtensionRecord:(id)a2 resolveAndDetach:(BOOL)a3;
+ (id)pluginKitProxyForUUID:(id)a0;
+ (id)plugInKitProxyForPlugin:(unsigned int)a0 withContext:(struct LSContext { id x0; } *)a1;
+ (id)pluginKitProxyForIdentifier:(id)a0;
+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)a0 error:(id *)a1;

- (id)teamID;
- (id)bundleType;
- (BOOL)UPPValidated;
- (id)_localizedNameWithPreferredLocalizations:(id)a0 useShortNameOnly:(BOOL)a1;
- (id)dataContainerURL;
- (id)_initWithPlugin:(unsigned int)a0 andContext:(struct LSContext { id x0; } *)a1 applicationExtensionRecord:(id)a2 resolveAndDetach:(BOOL)a3;
- (id)_initWithUUID:(id)a0 bundleIdentifier:(id)a1 pluginIdentifier:(id)a2 effectiveIdentifier:(id)a3 version:(id)a4 bundleURL:(id)a5;
- (id)_managedPersonas;
- (BOOL)profileValidated;
- (id)groupContainerURLs;
- (BOOL)freeProfileValidated;
- (BOOL)_usesSystemPersona;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (id)_valueForEqualityTesting;
- (id)correspondingApplicationExtensionRecord;
- (id)objectForInfoDictionaryKey:(id)a0 ofClass:(Class)a1 inScope:(unsigned long long)a2;
- (id)boundIconsDictionary;
- (unsigned long long)compatibilityState;
- (void)detach;
- (id)signerOrganization;
- (void)encodeWithCoder:(id)a0;
- (id)signerIdentity;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
