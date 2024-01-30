@interface WFMediaPlaybackController : NSObject

+ (id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)a0;
+ (id)songPropertySet;

- (id)init;
- (void)getLocalPlaybackCapabilityWithCompletion:(id /* block */)a0;
- (void)getCurrentlyPlayingMediaWithCompletion:(id /* block */)a0;
- (void)getPreferredPlaybackOriginWithCompletion:(id /* block */)a0;
- (void)getPreferredMediaControlOriginWithCompletion:(id /* block */)a0;
- (void)queueMediaItems:(id)a0 inAdditionMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)queueiTunesStoreItems:(id)a0 inAdditionMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)queueItemsWithIdentifierSets:(id)a0 inAdditionMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)clearQueueWithCompletion:(id /* block */)a0;
- (void)getActivePlayerPathWithCompletion:(id /* block */)a0;
- (void)getPreferredPlaybackDestinationForPlaybackArchive:(id)a0 completionBlock:(id /* block */)a1;
- (void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)a0 completionBlock:(id /* block */)a1;

@end
