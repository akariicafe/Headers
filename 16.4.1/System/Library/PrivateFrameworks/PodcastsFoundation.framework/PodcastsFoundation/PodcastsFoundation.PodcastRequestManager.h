@class _TtC18PodcastsFoundation21PodcastRequestManager;

@interface PodcastsFoundation.PodcastRequestManager : NSObject {
    void /* unknown type, empty encoding */ mediaRequestController;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation21PodcastRequestManager *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updatePodcastWithEpisodeAdamId:(id)a0 completion:(id /* block */)a1;
- (void)updatePodcastWithStoreId:(long long)a0 completion:(id /* block */)a1;

@end
