@class CADisplayLink, CLKClockTimerToken, CLKUIQuadView;

@interface CLKUIQuadViewDisplayLink : NSObject {
    CLKUIQuadView *_quadView;
    CADisplayLink *_displayLink;
    BOOL _synchronizeWithClockTimer;
    CLKClockTimerToken *_timerToken;
    long long _preferredFramesPerSecond;
    BOOL _paused;
}

- (double)timestamp;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)preferredFramesPerSecond;
- (BOOL)isPaused;
- (void)_displayLinkFired:(id)a0;
- (void)invalidate;
- (void)_updatePausedState;
- (id)initWithTarget:(id)a0 synchronizeWithClockTimer:(BOOL)a1;

@end
