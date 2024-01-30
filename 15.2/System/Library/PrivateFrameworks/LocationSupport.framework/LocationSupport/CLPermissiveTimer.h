@interface CLPermissiveTimer : CLTimer

- (void)dbgAssertInside;
- (void)shouldFire;
- (void)invalidate;

@end
