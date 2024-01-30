@interface LAUIPhysicalButtonViewBounceAnimation : LAUIPhysicalButtonViewAnimation {
    double _lastLength;
}

- (void)update;
- (double)duration;
- (double)_currentLength;
- (void)beginWithDelay:(double)a0;
- (void)_animateWithLength:(double)a0 delay:(double)a1;

@end
