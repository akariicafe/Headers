@class CNMonogrammer, FeatureManager, BookmarksForYouDataSource, CloudTabsForYouDataSource, CNAvatarImageRenderer, ReadingListForYouDataSource, NSObject, WebBookmarkCollection;
@protocol OS_dispatch_queue, WBBookmarkProvider;

@interface ForYouRecommendationMediator : WBSForYouRecommendationMediator {
    BookmarksForYouDataSource *_bookmarksDataSource;
    CloudTabsForYouDataSource *_cloudTabsDataSource;
    ReadingListForYouDataSource *_readingListDataSource;
    WebBookmarkCollection *_bookmarkCollection;
    id<WBBookmarkProvider> _bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
    FeatureManager *_featureManager;
    CNAvatarImageRenderer *_avatarImageRenderer;
    CNMonogrammer *_monogrammer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rendererLock;
}

- (void)_cloudTabFeatureAvailabilityDidChange:(id)a0;
- (id)dataSources;
- (void).cxx_destruct;
- (id)_loadDemoSuggestions;
- (void)updatedRecommendationsForTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithContextClient:(id)a0 featureManager:(id)a1 historyProvider:(id /* block */)a2;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)fetchImageForRecommendation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cloudTabsDataSourceIfAvailable;

@end
