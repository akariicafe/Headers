@class CHHapticEngine, NSObject;
@protocol OS_dispatch_queue, CHHapticPatternPlayer;

@interface AXMHapticComponent : AXMOutputComponent {
    NSObject<OS_dispatch_queue> *_queue;
    CHHapticEngine *_engine;
    id<CHHapticPatternPlayer> _player;
    BOOL _supportsHaptics;
    BOOL _supportsAudio;
    double _autoShutdownTimeout;
    BOOL _usesHapticsOnly;
}

@property (retain, nonatomic) id<CHHapticPatternPlayer> _levelPlayer;
@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled;
@property (nonatomic) double autoShutdownTimeout;
@property (nonatomic) BOOL usesHapticsOnly;

+ (BOOL)isSupported;

- (BOOL)canHandleRequest:(id)a0;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopCurrentHaptics;

@end
