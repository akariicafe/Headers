@class NSNumber, NSString;

@interface SBFTraitsOrientationDefaultResolutionPolicySpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>

@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;

@end
