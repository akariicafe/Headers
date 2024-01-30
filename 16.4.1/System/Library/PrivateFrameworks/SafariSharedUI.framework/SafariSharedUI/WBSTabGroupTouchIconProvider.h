@class NSString, NSMutableDictionary;

@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider <WBTabGroupManagerObserver> {
    NSMutableDictionary *_tabGroupIconMetadataCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultFolderIconForRequest:(id)a0;
- (void)_cancelRequestsAndClearCacheForTabGroup:(id)a0;
- (void)_cancelRequestsAndClearCacheForTabGroup:(id)a0 metadata:(id)a1;
- (id)backgroundColor;
- (id)iconForTabGroup:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (id)bookmarkUUIDForRequest:(id)a0;
- (id)configuration;
- (BOOL)canHandleRequest:(id)a0;
- (void)tabGroupManager:(id)a0 didUpdateTabsInTabGroupWithUUID:(id)a1;
- (id)init;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (void).cxx_destruct;
- (id)displayableFolderContentsForRequest:(id)a0;
- (void)updateIconForTabGroupIfNeeded:(id)a0;

@end
