@interface SBExternalIndigoDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) long long indigoConfigurationFlagsBitmask;

+ (id)defaults;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (BOOL)indigoConfigurationFlagOne;
- (BOOL)indigoConfigurationFlagThree;
- (BOOL)indigoConfigurationFlagTwo;

@end
