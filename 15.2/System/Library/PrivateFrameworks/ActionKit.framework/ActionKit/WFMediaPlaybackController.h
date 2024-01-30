@class NSObject;
@protocol OS_dispatch_queue;

@interface WFMediaPlaybackController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) void *reconSession;

+ (id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)a0;
+ (id)songPropertySet;

- (void).cxx_destruct;
- (id)init;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)connectToEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)getLocalPlaybackCapabilityWithCompletion:(id /* block */)a0;
- (void)getCurrentlyPlayingMediaWithCompletion:(id /* block */)a0;
- (void)getPreferredPlaybackOriginWithCompletion:(id /* block */)a0;
- (void)getPreferredMediaControlOriginWithCompletion:(id /* block */)a0;
- (void)queueMediaItems:(id)a0 inAdditionMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)queueiTunesStoreItems:(id)a0 inAdditionMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)queueItemsWithIdentifierSets:(id)a0 inAdditionMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)clearQueueWithCompletion:(id /* block */)a0;
- (void)getActivePlayerPathWithCompletion:(id /* block */)a0;
- (void)getRemoteControlEndpointsMatchingUIDs:(id)a0 completion:(id /* block */)a1;
- (void)connectToExternalDevice:(id)a0 completion:(id /* block */)a1;
- (id)createSendCommandError:(unsigned int)a0;
- (void)sendCommand:(unsigned int)a0 origin:(void *)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendCommand:(unsigned int)a0 playerPath:(void *)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendCommandToDevicesWithUIDs:(unsigned int)a0 deviceUIDs:(id)a1 options:(id)a2 sendTwice:(BOOL)a3 completion:(id /* block */)a4;
- (void)playPauseOnDevicesWithUIDs:(id)a0 completion:(id /* block */)a1;
- (void)playOnDevicesWithUIDs:(id)a0 completion:(id /* block */)a1;
- (void)pauseOnDevicesWithUIDs:(id)a0 completion:(id /* block */)a1;
- (void)skipForwardOnDevicesWithUIDs:(id)a0 interval:(double)a1 completion:(id /* block */)a2;
- (void)skipBackwardOnDevicesWithUIDs:(id)a0 interval:(double)a1 completion:(id /* block */)a2;
- (void)skipToPositionOnDevicesWithUIDs:(id)a0 interval:(double)a1 completion:(id /* block */)a2;
- (void)goToNextTrackOnDevicesWithUIDs:(id)a0 completion:(id /* block */)a1;
- (void)goToPreviousTrackOnDevicesWithUIDs:(id)a0 completion:(id /* block */)a1;
- (void)goToBeginningOfTrackOnDevicesWithUIDs:(id)a0 completion:(id /* block */)a1;
- (void)getPreferredPlaybackDestinationForPlaybackArchive:(id)a0 completionBlock:(id /* block */)a1;
- (void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)a0 completionBlock:(id /* block */)a1;

@end
