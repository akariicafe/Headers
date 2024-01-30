@class NSString, NSNumber;

@interface SBTraitsRoleResolvesOrientationInIsolationPolicySpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying> {
    NSString *_targetRole;
}

@property (readonly, nonatomic) NSString *targetRole;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;
- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;

@end
