@class WebBookmarkCollection, NSObject;
@protocol OS_dispatch_queue;

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_bookmarkCollectionAccessQueue;
}

- (id)defaultFolderIconForRequest:(id)a0;
- (id)backgroundColor;
- (id)bookmarkUUIDForRequest:(id)a0;
- (void)_folderContentsDidChange:(id)a0;
- (BOOL)canHandleRequest:(id)a0;
- (id)init;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (void).cxx_destruct;
- (id)displayableFolderContentsForRequest:(id)a0;

@end
