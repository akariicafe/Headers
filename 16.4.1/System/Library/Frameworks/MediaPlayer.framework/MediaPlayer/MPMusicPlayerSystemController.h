@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)playbackState;
- (void)onSystemServer:(id /* block */)a0;
- (void)_establishConnectionIfNeeded;
- (id)_nowPlaying;
- (id)_queueDescriptor;
- (BOOL)_shouldAccessCache;
- (void)openToPlayQueueDescriptor:(id)a0;

@end
