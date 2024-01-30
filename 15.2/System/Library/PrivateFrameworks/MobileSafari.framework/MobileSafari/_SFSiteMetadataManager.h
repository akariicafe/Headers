@class _SFFaviconProvider, _SFPasswordTouchIconCache, _SFTouchIconCache, WBSLeadImageCache, _SFLinkPresentationIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager

@property (class, readonly, nonatomic) BOOL hasSharedSiteMetadataManager;

@property (readonly, nonatomic) _SFFaviconProvider *faviconProvider;
@property (readonly, nonatomic) _SFPasswordTouchIconCache *passwordTouchIconCache;
@property (readonly, nonatomic) _SFTouchIconCache *touchIconCache;
@property (readonly, nonatomic) WBSLeadImageCache *leadImageCache;
@property (readonly, nonatomic) _SFLinkPresentationIconCache *linkPresentationIconCache;

+ (void)setSharedSiteMetadataManagerProvider:(id)a0;
+ (id)sharedSiteMetadataManager;
+ (void)setSharedSiteMetadataManager:(id)a0;

- (void)scheduleLowPriorityRequestForBookmarks:(id)a0;
- (void).cxx_destruct;
- (id)initWithInjectedBundleURL:(id)a0 imageCacheDirectoryURL:(id)a1 cacheIsReadOnly:(BOOL)a2 metadataType:(unsigned long long)a3;

@end
