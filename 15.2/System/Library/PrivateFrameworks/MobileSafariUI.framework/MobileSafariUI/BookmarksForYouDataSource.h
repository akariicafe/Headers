@class NSObject;
@protocol OS_dispatch_queue, WBBookmarkProvider;

@interface BookmarksForYouDataSource : WBSForYouRecommendationMediatorDataSource {
    id<WBBookmarkProvider> _bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_bookmarksDidChangeWithNotification:(id)a0;
- (id)initWithBookmarkProvider:(id)a0 accessQueue:(id)a1 bookmarkCollection:(id)a2;

@end
