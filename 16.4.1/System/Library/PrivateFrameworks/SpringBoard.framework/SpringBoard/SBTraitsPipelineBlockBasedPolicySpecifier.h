@class SBFTraitsArbiter, NSNumber, NSString;

@interface SBTraitsPipelineBlockBasedPolicySpecifier : NSObject <BSInvalidatable, SBFTraitsPreferencesStageResolutionPolicySpecifying> {
    BOOL _isValid;
    NSNumber *_componentOrder;
}

@property (readonly, copy, nonatomic) id /* block */ specifierBlock;
@property (readonly, weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (copy, nonatomic) NSString *specifierDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferencesType;
- (id)initWithPolicySpecifierBlock:(id /* block */)a0 specifierDescription:(id)a1 componentOrder:(id)a2 arbiter:(id)a3;
- (void)dealloc;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;

@end
