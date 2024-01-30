@interface PodcastsFoundation.AddingPodcastStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ refreshQueue;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ currentlyAddingShows;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateAddingShowsWithStoreCollectionIds:(id)a0;

@end
