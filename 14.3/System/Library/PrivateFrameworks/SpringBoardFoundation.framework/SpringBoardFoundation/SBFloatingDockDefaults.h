@interface SBFloatingDockDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL recentsEnabled;

- (void)_bindAndRegisterDefaults;

@end
