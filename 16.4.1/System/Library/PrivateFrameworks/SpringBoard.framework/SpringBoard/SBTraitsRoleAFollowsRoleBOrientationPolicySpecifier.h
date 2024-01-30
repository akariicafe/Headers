@class NSString, NSNumber;

@interface SBTraitsRoleAFollowsRoleBOrientationPolicySpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying> {
    BOOL _force;
    BOOL _animate;
    NSString *_roleA;
    NSString *_roleB;
}

@property (readonly, nonatomic) NSString *roleA;
@property (readonly, nonatomic) NSString *roleB;
@property (readonly, nonatomic) BOOL animate;
@property (readonly, nonatomic) BOOL force;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;
- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;

@end
