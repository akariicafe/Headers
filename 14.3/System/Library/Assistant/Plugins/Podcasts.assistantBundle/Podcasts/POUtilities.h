@interface POUtilities : NSObject

+ (id)commandStatusForRemoteStatus:(unsigned int)a0 error:(id)a1 isRemoteStorePlayback:(BOOL)a2;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 completion:(id /* block */)a7;
+ (id)identifierFromDomainObject:(id)a0;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 allowsFallback:(BOOL)a7 completion:(id /* block */)a8;
+ (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueueFromRequestIdentifiers:(id)a0 startPlaying:(BOOL)a1 assetInfo:(id)a2 requesterSharedUserId:(id)a3 sharedUserIdFromPlayableITunesAccount:(id)a4;
+ (void)modifyContextForAirplay:(id)a0 andPlayLocally:(id)a1 completion:(id /* block */)a2;
+ (id)typeFromDomainObject:(id)a0;
+ (BOOL)isPodcastsNowPlaying;
+ (void)setPlaybackRate:(float)a0 failureErrorCode:(long long)a1 completion:(id /* block */)a2;

@end
