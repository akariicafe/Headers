@class NSString;

@interface SBTraitsEmbeddedDisplayRolesAndDefaultPoliciesProvider : NSObject <SBFTraitsArbiterStagesRolesProvider, SBTraitsOrientationPolicySpecifierDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultIsolationDrivenRoles;
- (id)defaultDeviceOrientationDrivenRoles;
- (id)defaultKeyboardFocusDrivenRoles;
- (id)orientationStageRoles;
- (id)defaultActiveOrientationBelowDrivenRoles;
- (id)zOrderStageRoles;
- (id)defaultOtherParticipantDrivenRoles;

@end
