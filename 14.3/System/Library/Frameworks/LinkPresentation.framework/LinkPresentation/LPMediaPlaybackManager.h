@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {
    NSHashTable *_mediaPlayers;
}

+ (id)shared;

- (id)audioSession;
- (id)init;
- (void)_updateAudioSessionCategory;
- (void).cxx_destruct;
- (BOOL)releaseDecodingResourcesForInactivePlayers;
- (void)addMediaPlayer:(id)a0;
- (void)removeMediaPlayer:(id)a0;
- (void)mediaPlayer:(id)a0 didChangePlayingState:(BOOL)a1;
- (void)mediaPlayer:(id)a0 didChangeMutedState:(BOOL)a1;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)a0;
- (BOOL)_sharedSessionHasPlayingAudio;
- (void)volumeChanged:(id)a0;

@end
