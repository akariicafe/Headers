@interface NMSPodcastsFetchRequests : NSObject

+ (id)_createFetchRequestForEpisodeDownloadableItem;
+ (id)_predicateForDownloadableWatchEpisodesWithDownloadedOnly:(BOOL)a0 unplayedOnly:(BOOL)a1;
+ (id)fetchRequestForFeedURL:(id)a0 downloadSettings:(id)a1 downloadedOnly:(BOOL)a2 ctx:(id)a3;
+ (id)fetchRequestForSavedEpisodesDownloadSettings:(id)a0 downloadedOnly:(BOOL)a1;
+ (id)fetchRequestForStationUUID:(id)a0 downloadSettings:(id)a1 downloadedOnly:(BOOL)a2;
+ (id)fetchRequestForUpNextDownloadSettings:(id)a0 downloadedOnly:(BOOL)a1;
+ (id)legacy_fetchRequestForEpisodesWithFeedURL:(id)a0 downloadedOnly:(BOOL)a1 ctx:(id)a2;
+ (id)legacy_fetchRequestForSavedEpisodesDownloadedOnly:(BOOL)a0;
+ (id)legacy_fetchRequestForStationWithUUID:(id)a0;
+ (id)legacy_fetchRequestForUpNextEpisodesDownloadedOnly:(BOOL)a0;

@end
