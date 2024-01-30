@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface OKAudioDucker : NSObject {
    float _currentVolume;
    float _fadeToVolume;
    float _fadeFromVolume;
    float _duckLevel;
    double _startFadeTime;
    long long _duckState;
    double _fadeDuration;
    double _duckDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _setVolumeBlock;
}

@property (nonatomic) float volume;

- (void)cancel;
- (id)init;
- (void)dealloc;
- (void)beginFadingWithDuration:(double)a0;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)endDucking;
- (void)endFading;
- (void)setSetVolumeBlock:(id /* block */)a0;
- (void)endFading:(BOOL)a0;
- (void)_handleTimerEvent;

@end
