@class NSString, SBFTraitsPreferencesTree, SBFTraitsArbiter, NSMutableArray;
@protocol BSInvalidatable;

@interface SBFTraitsArbitrationPreferencesResolutionStage : NSObject <BSDescriptionProviding> {
    NSMutableArray *_resolutionPolicySpecifiers;
    NSMutableArray *_nodesSpecsSpecifiers;
    NSMutableArray *_treeSolvers;
    SBFTraitsPreferencesTree *_stagePreferencesTree;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (readonly, copy, nonatomic) NSMutableArray *participantsRoles;
@property (readonly, nonatomic) long long preferencesType;
@property (readonly, weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_TEMP_89923418_currentStagePreferencesTree;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_addStageComponent:(id)a0 toArray:(id)a1 update:(BOOL)a2 animate:(BOOL)a3;
- (void)removeNodesSpecificationsSpecifier:(id)a0;
- (void)removeTreeSolver:(id)a0;
- (void)removeResolutionPolicySpecifier:(id)a0 animate:(BOOL)a1;
- (id)initWithParticipantsRoles:(id)a0 preferencesType:(long long)a1 arbiter:(id)a2;
- (void)addResolutionPolicySpecifier:(id)a0 animate:(BOOL)a1;
- (void)addResolutionPolicySpecifier:(id)a0 update:(BOOL)a1;
- (void)dealloc;
- (void)addTreeSolver:(id)a0;
- (void)removeResolutionPolicySpecifier:(id)a0;
- (id)_setupStateDump;
- (void)updateResolutionWithContext:(id)a0;
- (void)addNodesSpecificationsSpecifier:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_removeComponent:(id)a0 fromArray:(id)a1 update:(BOOL)a2 animate:(BOOL)a3;
- (void)removeResolutionPolicySpecifier:(id)a0 update:(BOOL)a1;
- (void).cxx_destruct;
- (void)addResolutionPolicySpecifier:(id)a0;

@end
