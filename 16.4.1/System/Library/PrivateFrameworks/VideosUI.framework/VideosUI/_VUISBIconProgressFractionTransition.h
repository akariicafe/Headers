@interface _VUISBIconProgressFractionTransition : _VUISBIconProgressTransition {
    double _targetFraction;
}

+ (id)newTransitionToFraction:(double)a0;

- (void)_updateView:(id)a0 forDisplayedFraction:(double)a1;
- (void)completeTransitionAndUpdateView:(id)a0;
- (BOOL)isCompleteWithView:(id)a0;
- (void)updateToFraction:(double)a0;
- (void)updateView:(id)a0 withElapsedTime:(double)a1;

@end
