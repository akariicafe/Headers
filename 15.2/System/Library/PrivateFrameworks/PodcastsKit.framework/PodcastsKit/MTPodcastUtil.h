@interface MTPodcastUtil : NSObject

+ (id)stringForUnplayedEpisodeCount:(long long)a0 titleCase:(BOOL)a1;
+ (id)stringForUnplayedEpisodeCount:(long long)a0;
+ (id)stringForSavedEpisodeCount:(long long)a0;
+ (id)stringForNewEpisodeCount:(long long)a0 titleCase:(BOOL)a1;
+ (id)stringForATVFeedLastChangedForDate:(id)a0;
+ (id)stringForEpisodeCount:(long long)a0;
+ (id)stringForMostRecentEpisodeCount:(long long)a0;
+ (id)stringForUnplayedEpisodeCount:(unsigned long long)a0 withSavedEpisodeCount:(unsigned long long)a1;
+ (id)stringForNewEpisodeCount:(long long)a0;
+ (id)stringForEpisodesInFeedCount:(long long)a0;
+ (id)stringForATVFeedLastChangedForPodcast:(id)a0;
+ (unsigned long long)episodeCountForPredicate:(id)a0;
+ (id)episodeTitlesForPredicate:(id)a0;
+ (unsigned long long)countOfUnplayedEpisodesForPodcastUuid:(id)a0;

@end
