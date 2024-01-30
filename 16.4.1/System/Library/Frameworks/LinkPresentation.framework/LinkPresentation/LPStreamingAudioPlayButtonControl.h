@class LPAudioPlayerMediaPlayableAdaptor;
@protocol LPAudioPlayer;

@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPAudioPlayerClient> {
    id<LPAudioPlayer> _player;
    LPAudioPlayerMediaPlayableAdaptor *_playableAdaptor;
}

- (void)dealloc;
- (id)playable;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)audioPlayer:(id)a0 didChangeProgress:(float)a1;
- (void)audioPlayer:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)audioPlayerDidFailToPlay:(id)a0;
- (id)initWithAudio:(id)a0 style:(id)a1 theme:(id)a2 player:(id)a3;

@end
