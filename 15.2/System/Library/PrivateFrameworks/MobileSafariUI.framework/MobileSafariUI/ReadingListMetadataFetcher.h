@class WebBookmarkCollection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ReadingListMetadataProvider;

@interface ReadingListMetadataFetcher : NSObject {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_metadataSynchronizationQueue;
    NSMutableArray *_bookmarksPendingMetadata;
    BOOL _isFetchingMetadata;
    NSMutableArray *_bookmarksPendingThumbnail;
    id<ReadingListMetadataProvider> _defaultThumbnailProvider;
    BOOL _isFetchingThumbnail;
}

+ (id)sharedMetadataFetcher;
+ (BOOL)shouldFetchMetadataForBookmark:(id)a0;
+ (BOOL)shouldFetchThumbnailForBookmark:(id)a0;

- (void).cxx_destruct;
- (id)_initWithBookmarkCollection:(id)a0;
- (BOOL)_queue:(id)a0 containsBookmark:(id)a1;
- (void)_fetchNextItemMetadata;
- (void)_fetchNextItemThumbnail;
- (void)_fetchMetadataWithDefaultProviderForPendingItem:(id)a0;
- (void)_setTitle:(id)a0 previewText:(id)a1 thumbnailURLString:(id)a2 thumbnailImage:(id)a3 forItem:(id)a4;
- (void)_didFinishFetchingMetadataForItem:(id)a0;
- (void)_didFailMetadataFetchForBookmarkWithID:(int)a0;
- (void)_fetchThumbnailWithDefaultProviderForPendingItem:(id)a0;
- (void)_setThumbnailImage:(id)a0 fromURL:(id)a1 forBookmarkWithID:(int)a2;
- (void)_didFinishFetchingThumbnailForItem:(id)a0;
- (BOOL)_lockAndSaveBookmark:(id)a0 postNotification:(BOOL)a1;
- (void)_fetchMetadataForPendingItem:(id)a0;
- (void)_fetchThumbnailForPendingItem:(id)a0;
- (void)fetchMetadataForReadingListBookmark:(id)a0 withProvider:(id)a1;
- (void)fetchThumbnailForReadingListBookmark:(id)a0 withProvider:(id)a1;

@end
