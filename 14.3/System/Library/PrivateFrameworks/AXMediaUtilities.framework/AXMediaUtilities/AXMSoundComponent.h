@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent {
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
}

@property (retain, nonatomic) id configChangedObserverToken;

+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (BOOL)_startEngineIfNeeded:(id *)a0;
- (void)_scheduleOneShotSound:(id)a0 completion:(id /* block */)a1;
- (id)_scheduleActiveSound:(id)a0;
- (void)_stopActiveSound:(id)a0;
- (void)_logAudioFileInfo:(id)a0;
- (BOOL)canHandleRequest:(id)a0;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;

@end
