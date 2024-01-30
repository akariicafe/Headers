@class NSMutableDictionary;

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor

@property (retain, nonatomic) NSMutableDictionary *episodeObservers;

- (id)entityName;
- (id)init;
- (id)predicate;
- (void).cxx_destruct;
- (void)stop;
- (id)podcastPredicate;
- (void)updateEpisodePredicates;
- (id)podcastUuids;
- (void)addEpisodeObserverForPodcast:(id)a0;
- (id)episodePredicateForPodcast:(id)a0;
- (id)episodeSortDescriptorsForPodcast:(id)a0;
- (id)createEpisodeObserverForPodcastUuid:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (void)episodeUuidObserver:(id)a0 resultsChangedForPodcast:(id)a1 withDeletedIds:(id)a2 andInsertIds:(id)a3;
- (void)resultsChangedWithDeletedIds:(id)a0 andInsertIds:(id)a1;
- (void)removeEpisodeObserverForPodcast:(id)a0;
- (id)episodeObserverForPodcastUuid:(id)a0;
- (id)episodeUuids;

@end
