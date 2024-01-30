@class LPStreamingAudioPlayer;

@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPStreamingAudioPlayerClient> {
    LPStreamingAudioPlayer *_player;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)buttonPressed:(id)a0;
- (void)streamingAudioPlayer:(id)a0 didChangeProgress:(float)a1;
- (void)streamingAudioPlayer:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)streamingAudioPlayerDidFailToPlay:(id)a0;
- (id)initWithAudio:(id)a0 style:(id)a1;

@end
