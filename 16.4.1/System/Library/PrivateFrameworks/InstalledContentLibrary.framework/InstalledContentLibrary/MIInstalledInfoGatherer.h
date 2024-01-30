@class NSString, MIBundleContainer, MIDataContainer, MIExecutableBundle, NSURL;

@interface MIInstalledInfoGatherer : NSObject

@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (readonly, nonatomic) MIExecutableBundle *builtInAppParallelPlaceholderBundle;
@property (readonly, nonatomic) MIBundleContainer *bundleContainer;
@property (readonly, nonatomic) MIDataContainer *dataContainer;
@property (readonly, nonatomic) NSString *owningBundleIdentifier;
@property (readonly, nonatomic) NSURL *parentBundleURL;

- (void).cxx_destruct;
- (id)_staticDiskUsage;
- (void)_fixUpForBuiltInAppParallelPlaceholder;
- (id)_groupContainersDictionary;
- (void)_populateAppExtensionRecordValues:(id)a0;
- (void)_populateAppRecordValues:(id)a0;
- (BOOL)_populateBundleRecord:(id)a0 error:(id *)a1;
- (BOOL)_populateBundleRecordValues:(id)a0 signingInfo:(id)a1 error:(id *)a2;
- (void)_populatePlaceholderRecordValues:(id)a0 signingInfo:(id)a1;
- (id)_sandboxEnvironment;
- (id)_stashedAppRecordForStashedContainer:(id)a0;
- (id)bundleRecordWithError:(id *)a0;
- (id)initWithAppExtensionBundle:(id)a0 inBundleIdentifier:(id)a1 dataContainer:(id)a2;
- (id)initWithBundle:(id)a0 dataContainer:(id)a1;
- (id)initWithBundleContainer:(id)a0;
- (id)initWithBundleContainer:(id)a0 dataContainer:(id)a1;

@end
