@class NSString, NSArray, _LSLazyPropertyList, NSURL, NSDictionary, NSUUID;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {
    NSString *_localizedShortName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedShortName;
@property (copy, nonatomic, setter=_setInfoDictionary:) _LSLazyPropertyList *_infoDictionary;
@property (copy, nonatomic) NSArray *machOUUIDs;
@property (copy, nonatomic, setter=setSDKVersion:) NSString *sdkVersion;
@property (copy, nonatomic, setter=_setEntitlements:) _LSLazyPropertyList *_entitlements;
@property (copy, nonatomic, setter=_setEnvironmentVariables:) _LSLazyPropertyList *_environmentVariables;
@property (nonatomic, setter=_setCompatibilityState:) unsigned long long compatibilityState;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleType;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleExecutable;
@property (readonly, nonatomic) NSString *canonicalExecutablePath;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *bundleContainerURL;
@property (readonly, nonatomic) NSURL *appStoreReceiptURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *signerIdentity;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSDictionary *environmentVariables;
@property (readonly, nonatomic) NSDictionary *groupContainerURLs;
@property (readonly, nonatomic) BOOL foundBackingBundle;
@property (readonly, nonatomic, getter=isContainerized) BOOL containerized;
@property (readonly, nonatomic) BOOL profileValidated;
@property (readonly, nonatomic) BOOL UPPValidated;
@property (readonly, nonatomic) BOOL freeProfileValidated;
@property (readonly, nonatomic) NSString *signerOrganization;
@property (readonly, nonatomic) NSUUID *cacheGUID;
@property (readonly, nonatomic) unsigned long long sequenceNumber;

+ (BOOL)canInstantiateFromDatabase;
+ (id)bundleProxyForCurrentProcess;
+ (id)bundleProxyForURL:(id)a0;
+ (id)bundleProxyForIdentifier:(id)a0;
+ (void)clearBundleProxyForCurrentProcess;
+ (id)bundleProxyForURL:(id)a0 error:(id *)a1;
+ (id)bundleProxyWithAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;

- (id)localizedName;
- (id)_localizedNameWithPreferredLocalizations:(id)a0 useShortNameOnly:(BOOL)a1;
- (id)dataContainerURL;
- (id)environmentVariables;
- (id)localizedNameWithPreferredLocalizations:(id)a0 useShortNameOnly:(BOOL)a1;
- (id)_managedPersonas;
- (id)groupContainerURLs;
- (BOOL)_usesSystemPersona;
- (id)objectForInfoDictionaryKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)entitlementValueForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)appStoreReceiptURL;
- (BOOL)_hasAssociatedPersonas;
- (id)entitlementValuesForKeys:(id)a0;
- (id)entitlementValueForKey:(id)a0 ofClass:(Class)a1;
- (id)objectForInfoDictionaryKey:(id)a0 ofClass:(Class)a1;
- (id)localizedValuesForKeys:(id)a0 fromTable:(id)a1;
- (id)_valueForEqualityTesting;
- (id)appStoreReceiptName;
- (id)_initWithBundleUnit:(unsigned int)a0 context:(struct LSContext { id x0; } *)a1 bundleType:(unsigned long long)a2 bundleID:(id)a3 localizedName:(id)a4 bundleContainerURL:(id)a5 dataContainerURL:(id)a6 resourcesDirectoryURL:(id)a7 iconsDictionary:(id)a8 iconFileNames:(id)a9 version:(id)a10;
- (id)objectsForInfoDictionaryKeys:(id)a0;
- (id)signerOrganization;
- (void)encodeWithCoder:(id)a0;
- (id)signerIdentity;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
