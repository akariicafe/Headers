@interface SBExternalPhoneDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL hideMyPhoneNumber;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
