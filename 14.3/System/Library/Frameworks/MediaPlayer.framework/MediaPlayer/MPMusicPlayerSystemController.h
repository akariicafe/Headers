@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)playbackState;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (id)_queueDescriptor;
- (id)_nowPlaying;
- (BOOL)userQueueModificationsDisabled;
- (void)_establishConnectionIfNeeded;
- (void)onSystemServer:(id /* block */)a0;
- (void)openToPlayQueueDescriptor:(id)a0;
- (BOOL)_shouldAccessCache;

@end
