@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (BOOL)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)attemptToPlayDescriptor:(id)a0;
- (void)stopPlaying;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;
- (void).cxx_destruct;

@end
