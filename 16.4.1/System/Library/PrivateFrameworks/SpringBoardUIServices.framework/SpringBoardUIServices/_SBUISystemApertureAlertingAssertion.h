@class NSString, SBUISystemApertureAlertingAction, SBUISystemApertureElementSource;

@interface _SBUISystemApertureAlertingAssertion : SBUISystemApertureAssertion <SBUISystemApertureAutomaticallyInvalidatable>

@property (weak, nonatomic) SBUISystemApertureElementSource *elementSource;
@property (retain, nonatomic) SBUISystemApertureAlertingAction *alertingAction;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic, getter=isAutomaticallyInvalidatable) BOOL automaticallyInvalidatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
