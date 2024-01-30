@class NSCache, NSString, NSMutableDictionary, NSURL, NSMutableSet, NSObject, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _areSettingsLoaded;
    WBSSiteMetadataImageCache *_imageCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _templateIconsDataForHostsAccessLock;
    NSMutableDictionary *_templateIconsDataForHosts;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableSet *_pendingTemplateIconRequestHosts;
    NSMutableSet *_pendingTemplateIconFallbackRequestHosts;
    NSMutableSet *_pendingSVGImageRenderingRequests;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSCache *_requestsToResponses;
    BOOL _historyDidFinishLoading;
    BOOL _hasPurgedUnneededItems;
}

@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (nonatomic) struct CGSize { double width; double height; } defaultIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

- (void)savePendingChangesBeforeTermination;
- (void)dealloc;
- (BOOL)canHandleRequest:(id)a0;
- (void)_registerRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (id)_monogramForRequest:(id)a0 themeColor:(id)a1;
- (id)_imageForRequest:(id)a0 getThemeColor:(id *)a1;
- (void)_requestTemplateIconForRequest:(id)a0;
- (void)_updateTemplateIconsDataForHost:(id)a0 image:(id)a1 themeColor:(id)a2 isSavedToDisk:(BOOL)a3;
- (void)retainTemplateIconForURLString:(id)a0;
- (void)_didAddHistoryItems:(id)a0;
- (void)_didLoadHistory:(id)a0;
- (void)_didRemoveHistoryItems:(id)a0;
- (id)_generateResponseForRequest:(id)a0;
- (BOOL)_isLocalIconRequest:(id)a0;
- (void)_notifyDidLoadIconForHost:(id)a0;
- (void)_notifyImageWasLoaded:(id)a0 forHost:(id)a1;
- (void)_purgeUnneededTemplateIconsIfReady;
- (void)_removeTemplateIconsDataForHost:(id)a0 ifIconIsInCache:(BOOL)a1;
- (void)_saveTemplateIcon:(id)a0 withThemeColor:(id)a1 forHost:(id)a2 toDisk:(BOOL)a3;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)a0;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)a0;
- (id)_templateIconForURL:(id)a0 getThemeColor:(id *)a1;
- (BOOL)_templateIconRetainerIsReadyForCleanUp;
- (void)_upgradeCacheVersionIfNeeded;
- (void)addTemplateIconAtURL:(id)a0 withThemeColor:(id)a1 forHost:(id)a2 toDisk:(BOOL)a3;
- (void)emptyCaches;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (void)releaseTemplateIconForHost:(id)a0;
- (void)releaseTemplateIconForURLString:(id)a0;
- (void)releaseTemplateIconsForHosts:(id)a0;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)retainTemplateIconForHost:(id)a0;
- (void)retainTemplateIconsForHosts:(id)a0;
- (BOOL)shouldRequestTemplateIconForURL:(id)a0 allowRefresh:(BOOL)a1;
- (void)siteMetadataImageCache:(id)a0 didFinishLoadingImage:(id)a1 forKeyString:(id)a2;
- (void)siteMetadataImageCache:(id)a0 didRemoveImageFromCacheForKeyString:(id)a1;
- (void)siteMetadataImageCacheDidEmptyCache:(id)a0;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)a0;

@end
