@interface PodcastsKit.MediaRemoteSubscriptionController : NSObject <PKSubscriptionController>

- (id)init;
- (void).cxx_destruct;
- (void)subscribeToStoreId:(id)a0 siriContext:(id)a1 completion:(id /* block */)a2;
- (void)subscribeToFeedUrl:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToStoreId:(id)a0 completion:(id /* block */)a1;

@end
