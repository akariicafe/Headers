@class NUAdInterstitial, NSString, NUAdStore;
@protocol NUAdManagerConfigurationProvider, NUDevice;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider>

@property (readonly, nonatomic) NUAdStore *adStore;
@property (readonly, nonatomic) id<NUAdManagerConfigurationProvider> configurationProvider;
@property (readonly, nonatomic) id<NUDevice> device;
@property (retain, nonatomic) NUAdInterstitial *interstitialAdPendingLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)bannerViewForIdentifier:(id)a0 contextProviders:(id)a1 layoutOptions:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)interstitialViewForContextProviders:(id)a0 layoutOptions:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)interstitialViewForContextProviders:(id)a0 contextProvidersWithKeys:(id)a1 layoutOptions:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)prerollForContextProviders:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)videoPlaylistAdForContextProviders:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)bannerViewDidLoad:(id)a0;
- (void)bannerViewDidUnload:(id)a0;
- (id)adContextValueForKeyPath:(id)a0;
- (id)initWithConfigurationProvider:(id)a0 device:(id)a1;
- (id)adWithIdentifier:(id)a0;
- (id)inArticleContextConstructor;
- (void)adForIdentifier:(id)a0 contextProviders:(id)a1 constructor:(id)a2 layoutOptions:(id)a3 completion:(id /* block */)a4;
- (id)interstitialContextConstructor;
- (id)contextForContextProviders:(id)a0 keyedContextProviders:(id)a1 constructor:(id)a2;
- (id)prerollContextConstructor;
- (void)videoAdForContextProviders:(id)a0 constructor:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)videoPlaylistAdContextConstructor;
- (id)defaultRootDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultBodyDefinition;
- (id)defaultArticleDefinition;
- (id)defaultIssueDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)prerollRootDefinition;
- (id)prerollHeaderDefinition;
- (id)prerollBodyDefinition;
- (id)videoPlaylistAdRootDefinition;
- (id)videoInTodayHeaderDefinition;
- (id)videoPlaylistAdBodyDefinition;

@end
