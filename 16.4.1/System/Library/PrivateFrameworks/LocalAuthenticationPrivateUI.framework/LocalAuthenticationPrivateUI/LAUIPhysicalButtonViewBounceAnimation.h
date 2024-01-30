@interface LAUIPhysicalButtonViewBounceAnimation : LAUIPhysicalButtonViewAnimation {
    double _lastLength;
}

- (double)duration;
- (void)update;
- (double)_currentLength;
- (void)beginWithDelay:(double)a0;
- (void)_animateWithLength:(double)a0 delay:(double)a1;

@end
