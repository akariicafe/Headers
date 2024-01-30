@class NSCache, NSString, NSArray, CloudTabStore, NSObject;
@protocol OS_dispatch_queue, WBBookmarkProvider;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource> {
    CloudTabStore *_cloudTabStore;
    NSArray *_cloudDevices;
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;
    NSCache *_bookmarksCache;
    id<WBBookmarkProvider> _bookmarkProvider;
}

@property (nonatomic) int searchableCollectionsMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 options:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;
- (id)initWithCloudTabStore:(id)a0 searchableCollectionsMask:(int)a1 bookmarkProvider:(id)a2;
- (void)clearBookmarksCache;
- (void)_updateCloudDevices:(id)a0;

@end
