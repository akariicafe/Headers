@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disablesForAccessibility;
@property (nonatomic) BOOL performedCheckForTripleClickSOSMigrationAlert;

- (BOOL)isAutomaticCallCountdownEnabled;
- (void)_bindAndRegisterDefaults;
- (long long)lockButtonSOSTriggerCount;
- (BOOL)clawCanTriggerSOS;

@end
