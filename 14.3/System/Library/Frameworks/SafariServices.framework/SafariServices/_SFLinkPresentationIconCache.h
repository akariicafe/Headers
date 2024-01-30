@class NSString, WBSSiteMetadataImageCache;
@protocol WBSSiteMetadataProviderDelegate;

@interface _SFLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache *_imageCache;
}

@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageDirectoryURL:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (id)imageForHost:(id)a0;
- (void)dealloc;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (BOOL)canHandleRequest:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)saveImage:(id)a0 forHost:(id)a1;

@end
