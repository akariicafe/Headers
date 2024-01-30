@class CADisplayLink, CLKClockTimerToken, CLKUIQuadView;

@interface CLKUIQuadViewDisplayLink : NSObject {
    CLKUIQuadView *_quadView;
    CADisplayLink *_displayLink;
    BOOL _synchronizeWithClockTimer;
    CLKClockTimerToken *_timerToken;
    long long _preferredFramesPerSecond;
    BOOL _paused;
}

- (void)_displayLinkFired:(id)a0;
- (unsigned long long)preferredFramesPerSecond;
- (double)timestamp;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (BOOL)isPaused;
- (void)invalidate;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)_updatePausedState;
- (long long)updateFrequencyForFPS:(long long)a0;
- (id)initWithTarget:(id)a0 synchronizeWithClockTimer:(BOOL)a1;

@end
