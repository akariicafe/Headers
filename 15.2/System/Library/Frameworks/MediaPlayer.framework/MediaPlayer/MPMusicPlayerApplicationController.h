@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {
    long long _shuffleMode;
    long long _repeatMode;
}

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;

- (void)_clearConnection;
- (void)setDisableAutomaticCanBeNowPlaying:(BOOL)a0;
- (void)setRelativeVolume:(float)a0;
- (void)prerollWithCompletion:(id /* block */)a0;
- (long long)shuffleMode;
- (long long)repeatMode;
- (void).cxx_destruct;
- (void)setRepeatMode:(long long)a0;
- (void)beginPlaybackAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithClientIdentifier:(id)a0 queue:(id)a1;
- (void)setQueueWithDescriptor:(id)a0;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_establishConnectionIfNeeded;
- (void)dealloc;
- (void)onApplicationServer:(id /* block */)a0;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)_mediaItemsForContentItemIDs:(id)a0;
- (void)onApplicationServerAsync:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)setShuffleMode:(long long)a0;

@end
