@class CAMediaTimingFunction;

@interface _VUISBInstallProgressStateTransition : _VUISBIconProgressTransition {
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _fromState;
    long long _toState;
    double _fraction;
}

+ (id)newTransitionFromState:(long long)a0 toState:(long long)a1;
+ (Class)_classForTransitionFromState:(long long)a0 toState:(long long)a1;

- (void)dealloc;
- (id)_initWithFromState:(long long)a0 toState:(long long)a1;
- (void)_updateView:(id)a0;
- (void)completeTransitionAndUpdateView:(id)a0;
- (BOOL)isCompleteWithView:(id)a0;
- (void)updateView:(id)a0 withElapsedTime:(double)a1;

@end
