@class CHHapticEngine, NSObject;
@protocol OS_dispatch_queue, CHHapticPatternPlayer;

@interface AXMHapticComponent : AXMOutputComponent {
    NSObject<OS_dispatch_queue> *_queue;
    CHHapticEngine *_engine;
    id<CHHapticPatternPlayer> _player;
    BOOL _supportsHaptics;
    BOOL _supportsAudio;
}

@property (retain, nonatomic) id<CHHapticPatternPlayer> _levelPlayer;
@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled;

+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;
- (BOOL)canHandleRequest:(id)a0;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopCurrentHaptics;

@end
