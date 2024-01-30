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

- (void)_addStageComponent:(id)a0 toArray:(id)a1 update:(BOOL)a2 animate:(BOOL)a3;
- (void)addResolutionPolicySpecifier:(id)a0 animate:(BOOL)a1;
- (void)removeTreeSolver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)_removeComponent:(id)a0 fromArray:(id)a1 update:(BOOL)a2 animate:(BOOL)a3;
- (void)addResolutionPolicySpecifier:(id)a0;
- (void)updateResolutionWithContext:(id)a0;
- (void)removeNodesSpecificationsSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)addTreeSolver:(id)a0;
- (id)initWithParticipantsRoles:(id)a0 preferencesType:(long long)a1 arbiter:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addResolutionPolicySpecifier:(id)a0 update:(BOOL)a1;
- (id)succinctDescriptionBuilder;
- (void)removeResolutionPolicySpecifier:(id)a0 animate:(BOOL)a1;
- (void)removeResolutionPolicySpecifier:(id)a0;
- (void)dealloc;
- (void)addNodesSpecificationsSpecifier:(id)a0;
- (void)removeResolutionPolicySpecifier:(id)a0 update:(BOOL)a1;
- (id)_setupStateDump;

@end
