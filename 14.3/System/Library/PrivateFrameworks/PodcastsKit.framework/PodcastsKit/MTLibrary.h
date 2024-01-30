@class MTCoalescableWorkController;

@interface MTLibrary : NSObject {
    MTCoalescableWorkController *_deleteHiddenPodcastsWorkController;
}

@property (nonatomic) BOOL iTunesMatchEnabled;
@property (readonly, nonatomic, getter=isSubscriptionSyncEnabled) BOOL subscriptionSyncEnabled;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (void)initialize;
+ (unsigned long long)freeSpace;
+ (BOOL)isSupportedUrlString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copy;
- (id)importContext;
- (id)mainQueueContext;
- (id)privateQueueContext;
- (id)mainOrPrivateContext;
- (id)carPlayContext;
- (id)storeContext;
- (id)resetableImportContext;
- (void)updateiTunesPlaylistForiTunesMatchState;
- (void)_userDefaultsDidChange:(id)a0;
- (id)lastUpdatedDateString;
- (void)enableSubscriptionOnPodcastUuid:(id)a0 setSyncDirty:(BOOL)a1;
- (void)enableSubscriptionOnPodcastUuid:(id)a0 setSyncDirty:(BOOL)a1 ctx:(id)a2;
- (void)disableSubscriptionOnPodcastUuid:(id)a0 setSyncDirty:(BOOL)a1;
- (void)disableSubscriptionOnPodcastUuid:(id)a0 setSyncDirty:(BOOL)a1 ctx:(id)a2;
- (BOOL)isSubscribedToPodcastWithUuid:(id)a0;
- (void)deletePodcastWithUuid:(id)a0 shouldSave:(BOOL)a1;
- (void)_deletePodcastWithUuid:(id)a0 forced:(BOOL)a1 ctx:(id)a2;
- (void)_deleteHiddenPodcasts;
- (void)_deletePodcastWithId:(id)a0 ctx:(id)a1;
- (void)deletePlaylist:(id)a0;
- (void)_deletePodcast:(id)a0 ctx:(id)a1;
- (void)_deleteEpisodeUuids:(id)a0 forced:(BOOL)a1 save:(BOOL)a2;
- (void)_deleteEpisodes:(id)a0 forced:(BOOL)a1 save:(BOOL)a2;
- (void)_deleteEpisodeUuids:(id)a0 forced:(BOOL)a1;
- (void)markPlaylistsForUpdateForPodcastUuids:(id)a0;
- (BOOL)setPlayState:(long long)a0 manually:(BOOL)a1 forUserActionOnEpisode:(id)a2 saveChanges:(BOOL)a3;
- (BOOL)setPlayed:(BOOL)a0 manually:(BOOL)a1 forUserActionOnEpisode:(id)a2 saveChanges:(BOOL)a3;
- (BOOL)setPlayState:(long long)a0 fromContextActions:(BOOL)a1 manually:(BOOL)a2 forUserActionOnEpisode:(id)a3 saveChanges:(BOOL)a4;
- (id)lastUpdatedDateAttributedString;
- (void)finishPlayingEpisodeUuid:(id)a0;
- (void)enableSubscriptionOnPodcastUuid:(id)a0;
- (void)disableSubscriptionOnPodcastUuid:(id)a0;
- (BOOL)isSubscribedToPodcastWithFeedUrl:(id)a0;
- (void)deletePodcastWithUuid:(id)a0;
- (void)deleteFromSyncPodcastsWithUuids:(id)a0;
- (void)deleteHiddenPodcasts;
- (void)deleteHiddenPodcastsSynchronously;
- (void)deleteStationWithUuid:(id)a0;
- (void)deleteEpisodeUuids:(id)a0;
- (void)deleteEpisodeUuids:(id)a0 forced:(BOOL)a1;
- (void)deleteEpisodes:(id)a0;
- (void)deleteOrphanedEpisodes;
- (void)deleteAllPodcasts;
- (void)deleteAllTopLevelStationsExcludingFolders;
- (BOOL)setStationsOrder:(id)a0;
- (BOOL)setPodcastsOrder:(id)a0;
- (BOOL)setEpisodesOrder:(id)a0 forStation:(id)a1;
- (BOOL)setStationShowGroupOrder:(id)a0 forStation:(id)a1;
- (void)markAsSaved:(BOOL)a0 forEpisodeUuids:(id)a1;
- (BOOL)setPlayed:(BOOL)a0 manually:(BOOL)a1 forUserActionOnEpisodeUuid:(id)a2;
- (BOOL)setPlayState:(long long)a0 manually:(BOOL)a1 forUserActionOnEpisodeUuid:(id)a2;
- (BOOL)canDeleteEpisode:(id)a0;

@end
