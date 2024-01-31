@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>

+ (id)__queryStringToQueryDictionary:(id)a0;
+ (id)__stringByRemovingPercentEscapes:(id)a0;
+ (id)__stringWithPercentEscape:(id)a0;

- (long long)_episodeContextFromString:(id)a0;
- (long long)_episodeContextSortFromString:(id)a0;
- (long long)_episodeOrderFromString:(id)a0;
- (unsigned long long)_playQueueTypeForRequestURL:(id)a0;
- (unsigned long long)_playReasonFromString:(id)a0;
- (id)_playbackRequestIdentifierWithHost:(id)a0 queryComponents:(id)a1;
- (id)_playbackRequestIdentifierWithHost:(id)a0 queryKey:(id)a1 value:(id)a2;
- (id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)a0 podcastFeedUrl:(id)a1 podcastStoreId:(long long)a2 episodeUuid:(id)a3 episodeGuid:(id)a4 episodeStoreId:(long long)a5 context:(long long)a6 contextSortType:(long long)a7 sampPlaybackOrder:(id)a8;
- (BOOL)isLocalSetPlaybackQueueURLString:(id)a0;
- (BOOL)isSubscribeCommandURLString:(id)a0;
- (BOOL)isUniversalPlaybackIdentifierURLString:(id)a0;
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)a0 episodeUuid:(id)a1 sampPlaybackOrder:(id)a2;
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)a0 sampPlaybackOrder:(id)a1;
- (id)localPlaybackQueueIdentifierForStationUuid:(id)a0;
- (id)localPlaybackQueueIdentifierForStationUuid:(id)a0 episodeUuid:(id)a1;
- (id)playbackQueueIdentifierForEpisodeAdamId:(id)a0;
- (id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)a0;
- (id)playbackQueueIdentifierForPodcastAdamId:(id)a0 sampPlaybackOrder:(id)a1;
- (id)playbackQueueIdentifierForSubscribeToPodcast:(id)a0;
- (id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)a0;
- (struct _MRSystemAppPlaybackQueue { } *)playbackQueueWithAccountInfoForIdentifiers:(id)a0;
- (struct _MRSystemAppPlaybackQueue { } *)playbackQueueWithDsid:(id)a0 forIdentifiers:(id)a1;
- (id)playbackRequestURLWithDSID:(id)a0 baseRequestURLString:(id)a1;
- (id)playbackRequestURLWithPlayReason:(unsigned long long)a0 baseRequestURLString:(id)a1;
- (id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)a0 podcastStoreId:(long long)a1 episodeGuid:(id)a2 episodeStoreId:(long long)a3 sampPlaybackOrder:(id)a4;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)a0 podcastFeedUrl:(id)a1 podcastStoreId:(long long)a2;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)a0 podcastFeedUrl:(id)a1 podcastStoreId:(long long)a2 episodeUuid:(id)a3 episodeGuid:(id)a4 episodeStoreId:(long long)a5 context:(long long)a6 contextSortType:(long long)a7;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)a0 podcastFeedUrl:(id)a1 podcastStoreId:(long long)a2 episodeUuid:(id)a3 episodeGuid:(id)a4 episodeStoreId:(long long)a5 sampPlaybackOrder:(id)a6;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)a0 podcastFeedUrl:(id)a1 podcastStoreId:(long long)a2 sampPlaybackOrder:(id)a3;
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)a0 episodeGuid:(id)a1 episodeStoreId:(long long)a2 podcastFeedUrl:(id)a3;
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)a0 episodeUuid:(id)a1 episodeGuid:(id)a2 episodeStoreId:(long long)a3 podcastFeedUrl:(id)a4;

@end
