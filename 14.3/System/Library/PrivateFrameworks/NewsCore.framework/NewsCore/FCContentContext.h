@class NSString, NSURL, FCAVAssetDownloadManager, FCAssetManager, FCContentContextInternal, FCContextConfiguration, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCTagController, FCArticleController;
@protocol FCAVAssetKeyServiceType, FCAssetKeyServiceType, FCCoreConfigurationManager, FCAVAssetKeyManagerType, FCNetworkReachabilityRequirement, FCAVAssetPrewarming, FCAssetKeyCacheType, FCNewsAppConfigurationManager, FCAssetKeyManagerType, FCAVAssetCacheType, FCBackgroundTaskable, FCAVAssetResourceLoaderType, FCAVAssetKeyCacheType, FCAVAssetFactoryType, FCPPTContext;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext>

@property (copy, nonatomic) FCContextConfiguration *contextConfiguration;
@property (copy, nonatomic) NSString *contentDirectory;
@property (retain, nonatomic) NSURL *assetCacheDirectoryURL;
@property (retain, nonatomic) FCContentContextInternal *internalContentContext;
@property (retain, nonatomic) id<FCAssetKeyServiceType> assetKeyService;
@property (retain, nonatomic) id<FCAssetKeyCacheType> assetKeyCache;
@property (retain, nonatomic) id<FCAssetKeyManagerType> assetKeyManager;
@property (retain, nonatomic) id<FCAVAssetFactoryType> avAssetFactory;
@property (retain, nonatomic) id<FCAVAssetCacheType> avAssetCache;
@property (retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager;
@property (retain, nonatomic) id<FCAVAssetKeyServiceType> avAssetKeyService;
@property (retain, nonatomic) id<FCAVAssetKeyCacheType> avAssetKeyCache;
@property (retain, nonatomic) id<FCAVAssetKeyManagerType> avAssetKeyManager;
@property (retain, nonatomic) id<FCAVAssetResourceLoaderType> avAssetResourceLoader;
@property (retain, nonatomic) id<FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) id<FCAVAssetPrewarming> avAssetPrewarmer;
@property (readonly, nonatomic) FCArticleController *articleController;
@property (readonly, nonatomic) FCTagController *tagController;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) id<FCPPTContext> pptContext;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentToken;

+ (void)initialize;

- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (id)initWithConfiguration:(id)a0 configurationManager:(id)a1 contentHostDirectory:(id)a2 networkBehaviorMonitor:(id)a3 desiredHeadlineFieldOptions:(unsigned long long)a4 feedUsage:(long long)a5 assetKeyManagerDelegate:(id)a6 appActivityMonitor:(id)a7 backgroundTaskable:(id)a8 pptContext:(id)a9;
- (void)_updateReachabilityGivenRequirements;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)a0;
- (void).cxx_destruct;
- (id)magazinesConfigurationManager;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (void)dealloc;
- (id)news_core_ConfigurationManager;
- (id)recordTreeSourceWithRecordSources:(id)a0;
- (void)ppt_overrideFeedEndpoint:(long long)a0;
- (void)ppt_prewarmFeedDatabase;
- (id)initWithConfiguration:(id)a0 configurationManager:(id)a1 contentHostDirectory:(id)a2 networkBehaviorMonitor:(id)a3 desiredHeadlineFieldOptions:(unsigned long long)a4 feedUsage:(long long)a5 appActivityMonitor:(id)a6 backgroundTaskable:(id)a7 pptContext:(id)a8;
- (id)interestTokenForContentManifest:(id)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0 exceptForFlusher:(id)a1;
- (id)initWithConfiguration:(id)a0 configurationManager:(id)a1 contentDatabase:(id)a2 contentHostDirectory:(id)a3 networkBehaviorMonitor:(id)a4 setupCustomURLProtocols:(BOOL)a5 desiredHeadlineFieldOptions:(unsigned long long)a6 feedUsage:(long long)a7 assetKeyManagerDelegate:(id)a8 appActivityMonitor:(id)a9 backgroundTaskable:(id)a10 pptContext:(id)a11;
- (id)recordSourceWithSchema:(id)a0;

@end
