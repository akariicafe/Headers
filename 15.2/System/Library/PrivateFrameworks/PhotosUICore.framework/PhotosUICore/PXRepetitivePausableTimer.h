@class NSTimer;

@interface PXRepetitivePausableTimer : NSObject {
    double _repetitiveInterval;
    id /* block */ _callBlock;
    int _reasonsToPause;
    NSTimer *_timer;
}

- (void)_startTimer;
- (void)_stopTimer;
- (void)unpause;
- (void).cxx_destruct;
- (void)pause;
- (void)reset;
- (id)initWithRepeatedInterval:(double)a0 initialTrigger:(BOOL)a1 target:(id /* block */)a2;
- (void)_handleTimer:(id)a0;
- (void)_pauseWithReasons:(int)a0;
- (void)_unpauseWithReasons:(int)a0;

@end
