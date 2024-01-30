@class NSURL, MIExecutableBundle, MIBundleMetadata;

@interface MIBundleContainer : MIContainer

@property (copy, nonatomic) MIBundleMetadata *bundleMetadata;
@property (readonly, nonatomic) NSURL *stashBaseURL;
@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
@property (readonly, nonatomic) NSURL *bundleMetadataURL;
@property (readonly, nonatomic) NSURL *iTunesMetadataURL;
@property (readonly, nonatomic) NSURL *referenceStorageURL;
@property (readonly, nonatomic) NSURL *compatibilityLinkDestination;
@property (readonly, nonatomic) BOOL shouldHaveCorrespondingDataContainer;
@property (readonly, nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) NSURL *parallelPlaceholderURL;

+ (id)allAppBundleContainersWithError:(id *)a0;
+ (id)appBundleContainerForIdentifier:(id)a0 inDomain:(unsigned long long)a1 withError:(id *)a2;
+ (id)appBundleContainerForIdentifier:(id)a0 temporary:(BOOL)a1 inDomain:(unsigned long long)a2 withError:(id *)a3;
+ (id)appBundleContainerWithIdentifier:(id)a0 createIfNeeded:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)a0 createIfNeeded:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;
+ (id)privateAppBundleContainerWithIdentifier:(id)a0 createIfNeeded:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;
+ (id)privateTempAppBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (id)tempAppBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (id)tempAppBundleContainerWithIdentifier:(id)a0 inDomain:(unsigned long long)a1 withError:(id *)a2;
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (id)updateSinfDataForAppWithIdentifier:(id)a0 sinfData:(id)a1 error:(id *)a2;
+ (BOOL)updateiTunesMetadataForAppWithIdentifier:(id)a0 plistData:(id)a1 error:(id *)a2;

- (id)initWithContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_bundleExtensionForContainerClassWithError:(id *)a0;
- (BOOL)_configureBundleWithError:(id *)a0;
- (id)_stashURLForIndex:(unsigned long long)a0;
- (id)_stashedBundleContainerForIndex:(unsigned long long)a0 error:(id *)a1;
- (BOOL)bestEffortRollbackiTunesMetadata:(id)a0 error:(id *)a1;
- (id)bundleMetadataWithError:(id *)a0;
- (BOOL)captureBundleByMoving:(id)a0 withError:(id *)a1;
- (BOOL)cloneContentFromStashedBundleContainer:(id)a0 error:(id *)a1;
- (id)initForAppContainerWithURL:(id)a0;
- (id)initWithToken:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 withError:(id *)a3;
- (BOOL)saveBundleMetadata:(id)a0 withError:(id *)a1;
- (BOOL)stashBundleContainerContents:(id)a0 error:(id *)a1;
- (id)stashedBundleContainerWithError:(id *)a0;
- (BOOL)transferExistingStashesFromContainer:(id)a0 error:(id *)a1;
- (BOOL)writeiTunesMetadata:(id)a0 error:(id *)a1;

@end
