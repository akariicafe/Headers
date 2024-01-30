@interface MTPlaybackQueueFactory : NSObject

+ (id)_episodeToPlayForPodcastUuid:(id)a0 playbackOrder:(long long)a1 excludeExplicit:(long long)a2 ctx:(id)a3;
+ (BOOL)_isContinuousPlaybackEnabledForLimit:(long long)a0;
+ (id)_latestEpisodeForPodcastUuid:(id)a0 restrictToUserEpisodes:(BOOL)a1 excludeExplicit:(long long)a2 ctx:(id)a3;
+ (id)_latestOrOldestEpisodeForPodcastUuid:(id)a0 restrictToUserEpisodes:(BOOL)a1 excludeExplicit:(long long)a2 latest:(BOOL)a3 ctx:(id)a4;
+ (id)_oldestEpisodeForPodcastUuid:(id)a0 restrictToUserEpisodes:(BOOL)a1 excludeExplicit:(long long)a2 ctx:(id)a3;
+ (id)_uuidForEpisode:(id)a0;

@end
