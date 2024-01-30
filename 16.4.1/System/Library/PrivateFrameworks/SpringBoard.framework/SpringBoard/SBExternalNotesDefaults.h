@interface SBExternalNotesDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL quickNotesDisabled;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
