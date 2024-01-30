@class NSString, NSNumber;

@interface SBTraitsRoleAFollowsRoleBPolicySpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying> {
    BOOL _force;
    BOOL _animate;
    NSString *_roleA;
    NSString *_roleB;
}

@property (readonly, nonatomic) NSString *roleA;
@property (readonly, nonatomic) NSString *roleB;
@property (readonly, nonatomic) BOOL animate;
@property (readonly, nonatomic) BOOL force;
@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;

@end
