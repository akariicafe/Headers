@interface MTRecencyUtil : NSObject

+ (id)upNextForPodcastUuid:(id)a0 excludeExplicit:(long long)a1 excludeStreaming:(long long)a2 ctx:(id)a3;
+ (id)_upNextForPodcast:(id)a0 serial:(BOOL)a1 excludeExplicit:(long long)a2 excludeStreaming:(long long)a3 ctx:(id)a4;
+ (id)_nextEpisodeForUnplayedPodcast:(id)a0 serial:(BOOL)a1 filter:(id)a2 ctx:(id)a3;
+ (double)_lastDatePlayedIfNotFutureDate:(double)a0 podcast:(id)a1;
+ (id)upNextForPodcastUuid:(id)a0 ctx:(id)a1;
+ (id)episodesForListenNowWithContext:(id)a0 limit:(long long)a1;

@end
