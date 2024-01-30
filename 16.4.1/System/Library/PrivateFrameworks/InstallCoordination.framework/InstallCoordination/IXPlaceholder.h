@class IXPlaceholderSeed, NSString, MIStoreMetadata;

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPlaceholderSeed *seed;
@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long placeholderType;
@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, nonatomic) BOOL hasIconPromise;
@property (readonly, nonatomic) BOOL hasEntitlementsPromise;
@property (readonly, nonatomic) BOOL hasInfoPlistLoctablePromise;
@property (readonly, nonatomic) BOOL hasPlugInPlaceholderPromises;
@property (copy, nonatomic) MIStoreMetadata *metadata;

+ (id)_iconDataForBundle:(struct __CFBundle { } *)a0 atURL:(id)a1 error:(id *)a2;
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)a0 error:(id *)a1;
+ (id)_placeholderForBundle:(id)a0 client:(unsigned long long)a1 withParent:(id)a2 installType:(unsigned long long)a3 metadata:(id)a4 placeholderType:(unsigned long long)a5 mayBeDeltaPackage:(BOOL)a6 error:(id *)a7;
+ (id)_pngDataForCGImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (BOOL)_setEntitlementsFromBundleExecutableURL:(id)a0 withBundleID:(id)a1 client:(unsigned long long)a2 onPlaceholder:(id)a3 error:(id *)a4;
+ (id)placeholderForInstallable:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 metadata:(id)a3 error:(id *)a4;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 error:(id *)a3;
+ (id)placeholderFromSerializedPlaceholder:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 error:(id *)a3;

- (void)setBundleName:(id)a0;
- (unsigned long long)installType;
- (void)setBundleID:(id)a0;
- (void)setMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)bundleName;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (id)metadataWithError:(id *)a0;
- (id)metadata;
- (id)bundleID;
- (BOOL)setPlaceholderAttributes:(id)a0 error:(id *)a1;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3 error:(id *)a4;
- (BOOL)setConfigurationCompleteWithError:(id *)a0;
- (BOOL)setEntitlementsPromise:(id)a0 error:(id *)a1;
- (BOOL)setIconPromise:(id)a0 error:(id *)a1;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3;
- (id)placeholderAttributesWithError:(id *)a0;
- (unsigned long long)placeholderType;
- (BOOL)_doInitWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 placeholderType:(unsigned long long)a3 error:(id *)a4;
- (id)_initAppExtensionPlaceholderWithBundleURL:(id)a0 bundleName:(id)a1 bundleID:(id)a2 parentPlaceholder:(id)a3 client:(unsigned long long)a4 error:(id *)a5;
- (BOOL)_internalInitAppExtensionPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 placeholderType:(unsigned long long)a3 client:(unsigned long long)a4 error:(id *)a5;
- (id)appExtensionPlaceholderPromisesWithError:(id *)a0;
- (id)entitlementsPromiseWithError:(id *)a0;
- (id)iconPromiseWithError:(id *)a0;
- (id)infoPlistLocalizationsWithError:(id *)a0;
- (id)infoPlistLoctablePromiseWithError:(id *)a0;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 error:(id *)a4;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 error:(id *)a4;
- (BOOL)launchProhibited:(BOOL *)a0 error:(id *)a1;
- (id)plugInPlaceholderPromisesWithError:(id *)a0;
- (Class)seedClass;
- (BOOL)setAppExtensionPlaceholderPromises:(id)a0 error:(id *)a1;
- (BOOL)setInfoPlistLocalizations:(id)a0 error:(id *)a1;
- (BOOL)setInfoPlistLoctablePromise:(id)a0 error:(id *)a1;
- (BOOL)setLaunchProhibited:(BOOL)a0 error:(id *)a1;
- (BOOL)setMetadata:(id)a0 error:(id *)a1;
- (BOOL)setPlugInPlaceholderPromises:(id)a0 error:(id *)a1;
- (BOOL)setSinfData:(id)a0 error:(id *)a1;
- (id)sinfDataWithError:(id *)a0;

@end
