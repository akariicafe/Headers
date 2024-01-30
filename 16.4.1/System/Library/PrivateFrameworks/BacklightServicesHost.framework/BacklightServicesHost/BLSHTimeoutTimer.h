@interface BLSHTimeoutTimer : BLSHAssertionAttributeTimer

- (void)timerFired;
- (BOOL)reactivateIfPossible;
- (void)restartTimer;

@end
