@class NSObject, SFWebBookmarkCollection;
@protocol OS_dispatch_queue;

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {
    SFWebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_bookmarkCollectionAccessQueue;
}

- (BOOL)canHandleRequest:(id)a0;
- (id)defaultFolderIconForRequest:(id)a0;
- (id)backgroundColor;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)bookmarkUUIDForRequest:(id)a0;
- (void)_folderContentsDidChange:(id)a0;
- (id)displayableFolderContentsForRequest:(id)a0;

@end
