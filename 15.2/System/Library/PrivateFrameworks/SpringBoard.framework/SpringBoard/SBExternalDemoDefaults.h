@interface SBExternalDemoDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL shouldLockIconsInStoreDemoMode;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
