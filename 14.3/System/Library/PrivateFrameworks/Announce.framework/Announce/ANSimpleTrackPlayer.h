@class AVAudioPlayer;

@interface ANSimpleTrackPlayer : ANTrackPlayer

@property (retain) AVAudioPlayer *currentPlayer;

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0 audioSession:(id)a1;
- (id)_nextPlayer:(id)a0;
- (id)_previousPlayer:(id)a0;
- (BOOL)playInternalSync;
- (id)whatIsPlaying;
- (void)stopInternalSync;
- (void)nextInternalSync;
- (void)previousInternalSync;
- (void)handleInterruptionDelay:(double)a0;
- (int)numberActivePlayers;
- (id)startNextPlaybackOnDidFinish:(id)a0;

@end
