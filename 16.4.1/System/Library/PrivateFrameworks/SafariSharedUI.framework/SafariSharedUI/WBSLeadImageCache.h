@class NSString, NSMutableDictionary, NSURL, NSObject, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_urlStringToRequestSets;
}

@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

- (void)savePendingChangesBeforeTermination;
- (BOOL)canHandleRequest:(id)a0;
- (void).cxx_destruct;
- (id)imageForURL:(id)a0;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (void)_addRequest:(id)a0;
- (void)emptyCaches;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)saveImage:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)siteMetadataImageCache:(id)a0 didFinishLoadingImage:(id)a1 forKeyString:(id)a2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)a0;

@end
