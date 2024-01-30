@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {
    NSHashTable *_mediaPlayers;
}

+ (id)shared;

- (void)volumeChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateAudioSessionCategory;
- (id)audioSession;
- (BOOL)releaseDecodingResourcesForInactivePlayers;
- (void)addMediaPlayer:(id)a0;
- (void)removeMediaPlayer:(id)a0;
- (void)mediaPlayer:(id)a0 didChangePlayingState:(BOOL)a1;
- (void)mediaPlayer:(id)a0 didChangeMutedState:(BOOL)a1;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)a0;
- (BOOL)_sharedSessionHasPlayingAudio;

@end
