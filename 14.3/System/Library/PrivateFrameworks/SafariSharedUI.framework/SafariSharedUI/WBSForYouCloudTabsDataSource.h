@class NSObject, WBSCloudTabStore;
@protocol OS_dispatch_queue;

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {
    WBSCloudTabStore *_tabsStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)_createInternalQueueIfNecessary;
- (void).cxx_destruct;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithTabStore:(id)a0;

@end
