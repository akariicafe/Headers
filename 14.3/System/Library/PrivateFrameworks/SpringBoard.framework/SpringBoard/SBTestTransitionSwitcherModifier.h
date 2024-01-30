@interface SBTestTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _shouldRasterizeLiveContentUntilDelay;
    double _delay;
}

- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void)setShouldRasterizeLiveContentUntilDelay:(double)a0;

@end
