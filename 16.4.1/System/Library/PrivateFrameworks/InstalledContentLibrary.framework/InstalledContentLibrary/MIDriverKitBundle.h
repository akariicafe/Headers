@interface MIDriverKitBundle : MIExecutableBundle

+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;

- (id)minimumOSVersion;
- (id)currentOSVersionForValidationWithError:(id *)a0;
- (id)initWithBundleParentURL:(id)a0 parentSubdirectory:(id)a1 bundleName:(id)a2 error:(id *)a3;
- (BOOL)validateBundleMetadataWithError:(id *)a0;

@end
