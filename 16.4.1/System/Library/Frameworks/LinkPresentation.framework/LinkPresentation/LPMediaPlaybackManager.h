@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {
    NSHashTable *_mediaPlayers;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_updateAudioSessionCategory;
- (void)volumeChanged:(id)a0;
- (id)audioSession;
- (void)addMediaPlayer:(id)a0;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)a0;
- (BOOL)_sharedSessionHasPlayingAudio;
- (void)mediaPlayer:(id)a0 didChangeMutedState:(BOOL)a1;
- (void)mediaPlayer:(id)a0 didChangePlayingState:(BOOL)a1;
- (BOOL)releaseDecodingResourcesForInactivePlayers;
- (void)removeMediaPlayer:(id)a0;

@end
