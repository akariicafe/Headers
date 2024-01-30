@class NSString, NSArray, NSNumber;

@interface SBTraitsRoleFollowsAccelerometerPolicySpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying> {
    NSString *_targetRole;
}

@property (readonly, nonatomic) NSString *targetRole;
@property (copy, nonatomic) NSArray *accelerometerStateTypes;
@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;

@end
