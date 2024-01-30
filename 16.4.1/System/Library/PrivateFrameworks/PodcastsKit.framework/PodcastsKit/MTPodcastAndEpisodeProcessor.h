@class NSMutableDictionary;

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor

@property (retain, nonatomic) NSMutableDictionary *episodeObservers;

- (id)entityName;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (id)predicate;
- (id)podcastUuids;
- (void)addEpisodeObserverForPodcast:(id)a0;
- (id)createEpisodeObserverForPodcastUuid:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)episodeObserverForPodcastUuid:(id)a0;
- (id)episodePredicateForPodcast:(id)a0;
- (id)episodeSortDescriptorsForPodcast:(id)a0;
- (void)episodeUuidObserver:(id)a0 resultsChangedForPodcast:(id)a1 withDeletedIds:(id)a2 andInsertIds:(id)a3;
- (id)episodeUuids;
- (id)podcastPredicate;
- (void)removeEpisodeObserverForPodcast:(id)a0;
- (void)removeEpisodeObserverForPodcasts:(id)a0;
- (void)resultsChangedWithDeletedIds:(id)a0 insertIds:(id)a1 updatedIds:(id)a2;
- (void)updateEpisodeObserverForPodcast:(id)a0;
- (void)updateEpisodePredicatesWithDeletedIds:(id)a0 andInsertIds:(id)a1 andUpdatedIds:(id)a2;

@end
