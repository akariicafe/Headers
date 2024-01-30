@class WebBookmarkCollection, NSObject;
@protocol OS_dispatch_queue;

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_bookmarkCollectionAccessQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)defaultFolderIconForRequest:(id)a0;
- (BOOL)canHandleRequest:(id)a0;
- (id)displayableFolderContentsForRequest:(id)a0;
- (id)backgroundColor;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (id)bookmarkUUIDForRequest:(id)a0;
- (void)_folderContentsDidChange:(id)a0;

@end
