@interface NMSPodcastsFetchRequests : NSObject

+ (id)_predicateForDownloadableWatchEpisodesWithDownloadedOnly:(BOOL)a0;
+ (id)_propertiesToFetchForEpisodeIterators;
+ (id)fetchRequestForEpisodesWithFeedURL:(id)a0 downloadedOnly:(BOOL)a1 ctx:(id)a2;
+ (id)fetchRequestForStationWithUUID:(id)a0;
+ (id)fetchRequestForUpNextEpisodesDownloadedOnly:(BOOL)a0;
+ (id)fetchRequestForSavedEpisodesDownloadedOnly:(BOOL)a0;

@end
