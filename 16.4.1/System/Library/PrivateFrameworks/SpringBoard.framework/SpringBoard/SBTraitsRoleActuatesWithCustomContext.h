@class NSString, SBFTraitsSettingsActuationContext, NSNumber;

@interface SBTraitsRoleActuatesWithCustomContext : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>

@property (readonly, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *actuationContext;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;
- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponentOrder:(id)a0 actuationContext:(id)a1;

@end
