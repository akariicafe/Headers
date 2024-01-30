@class NSArray, SBFTraitsSettingsActuationContext, NSString, NSNumber;

@interface SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier : NSObject <SBFTraitsPreferencesStageResolutionPolicySpecifying>

@property (weak, nonatomic) NSArray *participantsUniqueIdentifiers;
@property (nonatomic) BOOL forceResolution;
@property (retain, nonatomic) SBFTraitsSettingsActuationContext *actuationContext;
@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferencesType;
- (void).cxx_destruct;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;

@end
