@interface LAUIPhysicalButtonViewBounceAnimation : LAUIPhysicalButtonViewAnimation {
    double _lastLength;
}

- (double)_currentLength;
- (void)update;
- (double)duration;
- (void)beginWithDelay:(double)a0;
- (void)_animateWithLength:(double)a0 delay:(double)a1;

@end
