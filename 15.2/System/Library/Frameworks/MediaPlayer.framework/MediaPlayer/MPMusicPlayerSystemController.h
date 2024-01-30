@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openToPlayQueueDescriptor:(id)a0;
- (BOOL)_shouldAccessCache;
- (void)onSystemServer:(id /* block */)a0;
- (long long)repeatMode;
- (id)_queueDescriptor;
- (void)setRepeatMode:(long long)a0;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (id)_nowPlaying;
- (BOOL)userQueueModificationsDisabled;
- (void)_establishConnectionIfNeeded;
- (long long)playbackState;
- (void)setShuffleMode:(long long)a0;

@end
