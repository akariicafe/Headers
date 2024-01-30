@class NSSet, NSMutableDictionary, NSPersistentHistoryToken, NSString, NSObject;
@protocol OS_dispatch_queue, MTEpisodeLevelCalculatorProtocol, OS_dispatch_source;

@interface MTPodcastDerivedPropertyObserver : NSObject <MTDerivedPropertyChangeNotifying, MTLibraryChangeNotifier> {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_source> *_persistentHistorySource;
    BOOL _processingIsPaused;
}

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) NSMutableDictionary *podcastCache;
@property (retain, nonatomic) NSSet *episodePropertiesToFetch;
@property (retain, nonatomic) NSSet *podcastPropertiesToFetch;
@property (retain, nonatomic) NSSet *channelPropertiesToFetch;
@property (retain, nonatomic) NSSet *podcastStatsProperties;
@property (retain, nonatomic) NSPersistentHistoryToken *latestPersistentHistoryToken;
@property (nonatomic) BOOL isObserving;
@property (readonly, nonatomic) id<MTEpisodeLevelCalculatorProtocol> episodeLevelCalculator;
@property (copy, nonatomic) id /* block */ didFinishProcessingContextSaveHandlerForTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopObserving;
- (void)startObserving;
- (id)init;
- (void).cxx_destruct;
- (void)libraryDidChange:(id)a0;
- (BOOL)_changeContainsRelevantChannelChanges:(id)a0;
- (BOOL)_changeContainsRelevantEpisodeChanges:(id)a0;
- (void)resumeProcessing;
- (void)pauseProcessing;
- (BOOL)_changeContainsRelevantPodcastChanges:(id)a0;
- (void)_fetchLatestProcessedPersistentHistoryToken;
- (id)_historyTransactionsSinceLatestPersistentHistoryToken;
- (id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)a0 predicateForUnplayedInUnplayedTab:(id)a1 predicateForUserEpisodes:(id)a2;
- (void)_processLatestPersistentHistoryTransactions;
- (void)_setLastProcessedPersistentHistoryToken:(id)a0;
- (BOOL)_shouldSkipSettingPropertiesForWatchPPT;
- (BOOL)_shouldUpdatePodcastsStatsForChange:(id)a0;
- (void)_updateDerivedPropertiesForPodcastUUIDs:(id)a0;
- (void)_updateEpisodeCountsForPodcastUuid:(id)a0;
- (id)addDerivedPropertyChangeHandler:(id /* block */)a0;
- (unsigned long long)countOfUnplayedEpisodesForPodcast:(id)a0;
- (id)dependentPropertyForKey:(id)a0 forPodcastUuid:(id)a1;
- (id)derivedPropertiesForPodcast:(id)a0;
- (id)derivedPropertyValueForKey:(id)a0 forPodcast:(id)a1;
- (void)episodeResultsChangedForPodcastUuid:(id)a0;
- (void)notifyObserversForPodcast:(id)a0;
- (void)processLatestPersistentHistoryTransactions;
- (void)removeDerivedPropertyChangeHandler:(id)a0;
- (void)reportStatsForPodcasts;
- (void)setDependentPropertyValue:(id)a0 forKey:(id)a1 forPodcastUuid:(id)a2;
- (BOOL)setDerivedPropertyValue:(id)a0 forKey:(id)a1 forPodcast:(id)a2;
- (void)updateFlagsForPodcastUuid:(id)a0 predicateForUnplayedTab:(id)a1 predicateForUserEpisodes:(id)a2;

@end
