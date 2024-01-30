@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disablesForAccessibility;
@property (nonatomic) BOOL performedCheckForTripleClickSOSMigrationAlert;

- (BOOL)isAutomaticCallCountdownEnabled;
- (void)_bindAndRegisterDefaults;
- (BOOL)clawCanTriggerSOS;
- (long long)lockButtonSOSTriggerCount;

@end
