@class _SFFaviconProvider, WBSLeadImageCache, WBSTabGroupTouchIconProvider, _SFTouchIconCache, _SFSavedAccountTouchIconCache, WBSLinkPresentationIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager

@property (class, readonly, nonatomic) BOOL hasSharedSiteMetadataManager;

@property (readonly, nonatomic) WBSTabGroupTouchIconProvider *tabGroupIconProvider;
@property (readonly, nonatomic) _SFFaviconProvider *faviconProvider;
@property (readonly, nonatomic) _SFSavedAccountTouchIconCache *savedAccountTouchIconCache;
@property (readonly, nonatomic) _SFTouchIconCache *touchIconCache;
@property (readonly, nonatomic) WBSLeadImageCache *leadImageCache;
@property (readonly, nonatomic) WBSLinkPresentationIconCache *linkPresentationIconCache;

+ (void)setSharedSiteMetadataManagerProvider:(id)a0;
+ (void)setSharedSiteMetadataManager:(id)a0;
+ (id)sharedSiteMetadataManager;

- (void)scheduleLowPriorityRequestForBookmarks:(id)a0;
- (id)initWithInjectedBundleURL:(id)a0 imageCacheDirectoryURL:(id)a1 cacheIsReadOnly:(BOOL)a2 metadataType:(unsigned long long)a3;
- (void).cxx_destruct;

@end
