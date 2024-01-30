@interface MTEpisodeLookupUtil : NSObject

+ (id)_entityForFetchRequest:(id)a0 context:(id)a1;
+ (id)findEpisodeWithRequest:(id)a0 context:(id)a1;
+ (id)_entityForFetchRequest:(id)a0;
+ (id)_episodeMatchFromPredicate:(id)a0;
+ (id)_episodeMatchFromPredicate:(id)a0 context:(id)a1;
+ (id)_podcastMatchFromPredicate:(id)a0;
+ (id)_podcastMatchFromPredicate:(id)a0 context:(id)a1;
+ (id)findEpisodeFromModelObject:(id)a0;
+ (id)findEpisodeWithRequest:(id)a0;
+ (id)findPodcastWithFeedUrl:(id)a0;

@end
