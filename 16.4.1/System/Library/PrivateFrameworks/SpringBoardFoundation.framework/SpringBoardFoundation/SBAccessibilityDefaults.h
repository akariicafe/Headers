@interface SBAccessibilityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL allowReachability;
@property (readonly, nonatomic) BOOL reallyDisableReachability;

- (void)_bindAndRegisterDefaults;

@end
