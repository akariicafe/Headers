@interface MTRecencyUtil : NSObject

+ (double)_lastDatePlayedIfNotFutureDate:(double)a0 podcast:(id)a1;
+ (id)_nextEpisodeForUnplayedPodcast:(id)a0 serial:(BOOL)a1 filter:(id)a2 ctx:(id)a3;
+ (id)_upNextForPodcast:(id)a0 serial:(BOOL)a1 excludeExplicit:(long long)a2 ctx:(id)a3;
+ (id)_upNextResultForUnfollowedPodcast:(id)a0 filter:(id)a1 ctx:(id)a2;
+ (id)_upNextResultForUnplayedFollowedPodcast:(id)a0 nextEpisodeForUnplayedShow:(id)a1 newestEpisodeWithShowBump:(id)a2 mostRecentlyPlayed:(id)a3 filter:(id)a4 serial:(BOOL)a5 ctx:(id)a6;
+ (id)_upNextScoreWithLastModifiedDate:(double)a0 lastDatePlayed:(double)a1 filter:(id)a2 podcast:(id)a3 ctx:(id)a4;
+ (id)caughtUpNextEpisodeForPodcast:(id)a0 nextEpisodeForUnplayedShow:(id)a1 mostRecentlyPlayedLastDatePlayed:(double)a2 serial:(BOOL)a3 filter:(id)a4;
+ (id)episodesForListenNowWithContext:(id)a0 limit:(long long)a1;
+ (id)mostRecentlySavedUnplayedEpisodeForPodcast:(id)a0 filter:(id)a1 ctx:(id)a2;
+ (id)nextEpisodeForPodcast:(id)a0 mostRecentlyPlayed:(id)a1 caughtUpNextEpisode:(id)a2 serial:(BOOL)a3 filter:(id)a4;
+ (double)scoreFromModifiedDate:(double)a0;
+ (void)setCombinedScoreOnScore:(id)a0 total:(double)a1;
+ (void)setFollowedDateValuesOnScore:(id)a0 followedDate:(double)a1 followedDateWeight:(double)a2 total:(double)a3;
+ (void)setLastPlayedValuesOnScore:(id)a0 lastPlayedDate:(double)a1 lastPlayedDateWeight:(double)a2 total:(double)a3;
+ (void)setModifiedDateValuesOnScore:(id)a0 modifiedDate:(double)a1 modifiedDateWeight:(double)a2 total:(double)a3;
+ (void)setMostRecentlyPublishedUnplayedValuesOnScore:(id)a0 podcast:(id)a1 filter:(id)a2 mostRecentlyUnplayedPubDateWeight:(double)a3 total:(double)a4;
+ (void)setMostRecentlyPublishedValuesOnScore:(id)a0 podcast:(id)a1 filter:(id)a2 mostRecentPubDateWeight:(double)a3 total:(double)a4;
+ (void)setPercentOfEpsFromShowPlayedValuesOnScore:(id)a0 podcast:(id)a1 ctx:(id)a2 percentEpsFromShowPlayedWeight:(double)a3 total:(double)a4;
+ (void)setPercentOfTotalListeningValuesOnScore:(id)a0 podcast:(id)a1 ctx:(id)a2 percentEpsTotalPlayedWeight:(double)a3 total:(double)a4;
+ (void)setRecentlyFollowedHardCodedValueOnScore:(id)a0 podcast:(id)a1;
+ (void)unsafeUpdateRelatedFieldsIfUpNextChangedForPodcast:(id)a0 upNextResult:(id)a1 ctx:(id)a2;
+ (id)upNextForPodcastUuid:(id)a0 ctx:(id)a1;
+ (id)upNextForPodcastUuid:(id)a0 excludeExplicit:(long long)a1 ctx:(id)a2;

@end
