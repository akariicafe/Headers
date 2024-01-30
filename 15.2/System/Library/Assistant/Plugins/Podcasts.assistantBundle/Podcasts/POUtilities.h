@interface POUtilities : NSObject

+ (id)commandStatusForRemoteStatus:(unsigned int)a0 error:(id)a1 isRemoteStorePlayback:(BOOL)a2;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 completion:(id /* block */)a7;
+ (id)identifierFromDomainObject:(id)a0;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 allowsFallback:(BOOL)a7 completion:(id /* block */)a8;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 decodedRouteUIDs:(id)a3 originatingOutputDeviceUID:(id)a4 startPlaying:(BOOL)a5 requesterSharedUserId:(id)a6 sharedUserIdFromPlayableITunesAccount:(id)a7 context:(id)a8 allowsFallback:(BOOL)a9 completion:(id /* block */)a10;
+ (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueueFromRequestIdentifiers:(id)a0 startPlaying:(BOOL)a1 assetInfo:(id)a2 requesterSharedUserId:(id)a3 sharedUserIdFromPlayableITunesAccount:(id)a4;
+ (void)modifyContextForAirplay:(id)a0 andPlayLocally:(id)a1 completion:(id /* block */)a2;
+ (void)_resolveWithDestination:(id)a0 hashedRouteIdentifiers:(id)a1 decodedRouteIdentifiers:(id)a2 originatingOutputDeviceUID:(id)a3 localPlaybackPermitted:(BOOL)a4 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a5 completion:(id /* block */)a6;
+ (id)typeFromDomainObject:(id)a0;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 decodedRouteUIDs:(id)a2 originatingOutputDeviceUID:(id)a3 startPlaying:(BOOL)a4 requesterSharedUserId:(id)a5 sharedUserIdFromPlayableITunesAccount:(id)a6 context:(id)a7 allowsFallback:(BOOL)a8 completion:(id /* block */)a9;
+ (BOOL)isPodcastsNowPlaying;
+ (void)setPlaybackRate:(float)a0 failureErrorCode:(long long)a1 completion:(id /* block */)a2;
+ (BOOL)assistantErrorIsInformational:(id)a0;

@end
