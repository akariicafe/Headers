@class CAMediaTimingFunction;

@interface _VUISBIconProgressPausedTransition : _VUISBIconProgressTransition {
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    BOOL _toPaused;
    double _fraction;
}

+ (id)newTransitionToPaused:(BOOL)a0;

- (void)dealloc;
- (BOOL)isCompleteWithView:(id)a0;
- (void)completeTransitionAndUpdateView:(id)a0;
- (void)updateToPaused:(BOOL)a0;
- (void)updateView:(id)a0 withElapsedTime:(double)a1;
- (void)_updateView:(id)a0;
- (id)_initToPaused:(BOOL)a0;
- (void)_updateTimingFunction;
- (void)_updateElapsedTimeFromFraction;

@end
