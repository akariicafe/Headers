@class NSSet, NSMutableDictionary, NSPersistentHistoryToken, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MTPodcastDerivedPropertyObserver : NSObject <MTDerivedPropertyChangeNotifying, MTLibraryChangeNotifier> {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) NSMutableDictionary *podcastCache;
@property (retain, nonatomic) NSSet *episodePropertiesToFetch;
@property (retain, nonatomic) NSSet *podcastPropertiesToFetch;
@property (retain, nonatomic) NSSet *podcastStatsProperties;
@property (retain, nonatomic) NSPersistentHistoryToken *latestPersistentHistoryToken;
@property (nonatomic) BOOL isObserving;
@property (copy, nonatomic) id /* block */ didFinishProcessingContextSaveHandlerForTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)startObserving;
- (void)libraryDidChange:(id)a0;
- (void)_fetchLatestProcessedPersistentHistoryToken;
- (void)processLatestPersistentHistoryTransactions;
- (void)episodeResultsChangedForPodcastUuid:(id)a0;
- (id)_historyTransactionsSinceLatestPersistentHistoryToken;
- (BOOL)_changeContainsRelevantEpisodeChanges:(id)a0;
- (BOOL)_changeContainsRelevantPodcastChanges:(id)a0;
- (void)_updateDerivedPropertiesForPodcastUUIDs:(id)a0;
- (void)notifyObserversForPodcast:(id)a0;
- (void)_setLastProcessedPersistentHistoryToken:(id)a0;
- (void)reportStatsForPodcasts;
- (id)countOfNewEpisodesForEpisodes:(id)a0;
- (id)countOfUnplayedEpisodesForEpisodes:(id)a0 andPredicateForEpisodesOnUnplayedTab:(id)a1;
- (id)countOfMyMediaEpisodesForEpisodes:(id)a0 andPredicateForMyEpisodes:(id)a1;
- (void)updateFlagForEpisodes:(id)a0 predicateForUnplayedTab:(id)a1 predicateForUserEpisodes:(id)a2 podcastUuid:(id)a3 ctx:(id)a4;
- (BOOL)setDerivedPropertyValue:(id)a0 forKey:(id)a1 forPodcast:(id)a2;
- (id)derivedPropertiesForPodcast:(id)a0;
- (BOOL)_shouldSkipSettingPropertiesForWatchPPT;
- (BOOL)_shouldUpdatePodcastsStatsForChange:(id)a0;
- (id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)a0 predicateForUnplayedInUnplayedTab:(id)a1 predicateForUserEpisodes:(id)a2 predicateForTopLevelEpisodes:(id)a3;
- (id)derivedPropertyValueForKey:(id)a0 forPodcast:(id)a1;
- (id)dependentPropertyForKey:(id)a0 forPodcastUuid:(id)a1;
- (void)setDependentPropertyValue:(id)a0 forKey:(id)a1 forPodcastUuid:(id)a2;
- (id)addDerivedPropertyChangeHandler:(id /* block */)a0;
- (void)removeDerivedPropertyChangeHandler:(id)a0;
- (unsigned long long)countOfUnplayedEpisodesForPodcast:(id)a0;
- (unsigned long long)countOfMyMediaEpisodesForPodcast:(id)a0;

@end
