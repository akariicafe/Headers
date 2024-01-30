@interface CLPermissiveTimer : CLTimer

- (void)shouldFire;
- (void)dbgAssertInside;
- (void)invalidate;

@end
