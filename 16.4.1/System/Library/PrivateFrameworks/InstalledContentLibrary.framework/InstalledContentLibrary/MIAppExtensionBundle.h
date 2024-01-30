@class NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSString *validationOverrideParentBundleID;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;

- (id)initForTesting;
- (Class)dataContainerClass;
- (void).cxx_destruct;
- (id)minimumOSVersion;
- (id)dataContainerCreatingIfNeeded:(BOOL)a0 makeLive:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;
- (id)dataContainerWithError:(id *)a0;
- (id)extensionCacheEntryWithError:(id *)a0;
- (BOOL)hasDotInBundleIDSuffixWithError:(id *)a0;
- (id)initWithBundleParentURL:(id)a0 parentSubdirectory:(id)a1 bundleName:(id)a2 error:(id *)a3;
- (void)setBundleParentDirectoryURL:(id)a0;
- (BOOL)validateBundleMetadataWithError:(id *)a0;

@end
