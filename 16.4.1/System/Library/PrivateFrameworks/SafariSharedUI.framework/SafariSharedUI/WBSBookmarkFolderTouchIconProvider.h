@class UIColor, NSArray, NSString, NSMutableDictionary, NSObject, WBSBookmarkFolderTouchIconConfiguration;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_requestsToRequestInfos;
    NSMutableDictionary *_folderUUIDsToTouchIconInfo;
}

@property (readonly, nonatomic) NSArray *allFolderUUIDs;
@property (readonly) UIColor *backgroundColor;
@property (readonly, nonatomic) WBSBookmarkFolderTouchIconConfiguration *configuration;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_appUsesLeftToRightLayout;

- (id)defaultFolderIconForRequest:(id)a0;
- (id)bookmarkUUIDForRequest:(id)a0;
- (BOOL)canHandleRequest:(id)a0;
- (id)init;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (void).cxx_destruct;
- (id)displayableFolderContentsForRequest:(id)a0;
- (void)removeInfoForFolderWithUUID:(id)a0;
- (void)removeInfoForFoldersWithUUIDs:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (id)_arrayByPaddingArray:(id)a0 toMaximumNumberOfThumbnailsWithObject:(id)a1;
- (void)_coalesceResponseDispatchForRequest:(id)a0;
- (void)_dispatchResponseForRequest:(id)a0;
- (void)_dispatchResponseForRequest:(id)a0 touchIcon:(id)a1;
- (id)_drawTouchIconForRequest:(id)a0;
- (void)_prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id /* block */)_responseHandlerForRequest:(id)a0 thumbnailIndex:(unsigned long long)a1;
- (void)didCreateTouchIcon:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;

@end
