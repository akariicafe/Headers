@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (void).cxx_destruct;
- (id)init;
- (void)stopPlaying;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (BOOL)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;
- (BOOL)attemptToPlayDescriptor:(id)a0;

@end
