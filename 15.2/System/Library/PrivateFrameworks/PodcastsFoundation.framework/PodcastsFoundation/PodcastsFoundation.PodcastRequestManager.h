@class _TtC18PodcastsFoundation21PodcastRequestManager;

@interface PodcastsFoundation.PodcastRequestManager : NSObject {
    void /* unknown type, empty encoding */ mediaRequestController;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation21PodcastRequestManager *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)updatePodcastWithStoreId:(long long)a0 completion:(id /* block */)a1;
- (void)updatePodcastWithEpisodeAdamId:(id)a0 completion:(id /* block */)a1;

@end
