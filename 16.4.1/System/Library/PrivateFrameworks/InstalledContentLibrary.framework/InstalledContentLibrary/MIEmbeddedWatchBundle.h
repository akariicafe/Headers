@interface MIEmbeddedWatchBundle : MIExecutableBundle

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isApplicableToKnownWatchOSVersion;

- (unsigned char)bundleType;
- (BOOL)allowsAppExtensionsNotInExtensionCache;
- (id)currentOSVersionForValidationWithError:(id *)a0;
- (id)extensionKitBundlesPerformingPlatformValidation:(unsigned char)a0 withError:(id *)a1;
- (id)extensionKitBundlesWithError:(id *)a0;
- (id)initWithParentBundle:(id)a0 parentSubdirectory:(id)a1 bundleName:(id)a2 isPlaceholder:(BOOL)a3 error:(id *)a4;
- (id)pluginKitBundlesPerformingPlatformValidation:(unsigned char)a0 withError:(id *)a1;
- (id)pluginKitBundlesWithError:(id *)a0;

@end
