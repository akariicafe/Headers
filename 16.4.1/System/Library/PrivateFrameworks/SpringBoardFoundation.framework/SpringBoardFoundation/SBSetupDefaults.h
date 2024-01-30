@interface SBSetupDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL inSetupModeForActivationChange;

- (void)_bindAndRegisterDefaults;

@end
