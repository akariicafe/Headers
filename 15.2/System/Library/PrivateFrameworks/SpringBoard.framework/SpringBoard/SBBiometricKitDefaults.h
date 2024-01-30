@interface SBBiometricKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL coachingHintsEnabled;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
