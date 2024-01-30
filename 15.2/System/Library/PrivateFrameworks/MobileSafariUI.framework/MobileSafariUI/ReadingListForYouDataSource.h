@class ReadingListLeadImageCache, NSObject;
@protocol OS_dispatch_queue, WBBookmarkProvider;

@interface ReadingListForYouDataSource : WBSForYouRecommendationMediatorDataSource {
    id<WBBookmarkProvider> _bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
    ReadingListLeadImageCache *_leadImageCache;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_readingListContentsDidChange:(id)a0;
- (id)initWithBookmarkProvider:(id)a0 accessQueue:(id)a1 imageCache:(id)a2;

@end
