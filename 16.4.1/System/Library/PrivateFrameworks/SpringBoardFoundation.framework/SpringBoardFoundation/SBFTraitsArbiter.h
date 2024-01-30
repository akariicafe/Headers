@class SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier, NSString, NSHashTable, NSArray, NSSet, NSMutableDictionary, SBFTraitsArbitrationInputs, NSMutableSet, NSMutableArray, SBFTraitsArbitrationInputsValidationStage;
@protocol SBFTraitsArbiterDrawingDataSource, SBFTraitsArbiterInputsDataSource, BSInvalidatable;

@interface SBFTraitsArbiter : NSObject <BSDescriptionProviding> {
    NSSet *_zOrderStageRoles;
    NSSet *_orientationStageRoles;
    NSSet *_allStagesRoles;
    NSMutableDictionary *_liveRolesCounter;
    NSMutableDictionary *_acquiredParticipantsByUniqueIdentifier;
    NSMutableDictionary *_acquiredParticipantsByPreferencesType;
    NSMutableSet *_participantsNeedingUpdate;
    NSMutableArray *_arbiterNeedsUpdateReasons;
    NSMutableSet *_updatedParticipants;
    NSHashTable *_observers;
    SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier *_resolutionUpdateOrientationSpecifier;
    SBFTraitsArbitrationInputsValidationStage *_inputsValidationStage;
    NSArray *_preferencesResolutionStages;
    SBFTraitsArbitrationInputs *_lastRawInputs;
    SBFTraitsArbitrationInputs *_lastValidatedInputs;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (readonly, weak, nonatomic) id<SBFTraitsArbiterInputsDataSource> inputsDataSource;
@property (readonly, weak, nonatomic) id<SBFTraitsArbiterDrawingDataSource> drawingDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteArbiterWillBeginTransitionWithContext:(id)a0;
- (void)setNeedsUpdateArbitrationWithContext:(id)a0;
- (void)_participantDidUpdatePreferences:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)acquireParticipantWithRole:(id)a0 delegate:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)addObserver:(id)a0;
- (void)noteArbiterDidCompleteTransitionWithContext:(id)a0;
- (id)_newOrderedPreferencesResolutionStagesWithRolesProvider:(id)a0;
- (void)_updateArbitrationWithClientContext:(id)a0 defaultContext:(id)a1;
- (void)_setNeedsUpdateArbitrationWithReason:(id)a0 animated:(BOOL)a1;
- (void)_invalidateParticipant:(id)a0;
- (void)_participantDidUpdateSettings:(id)a0;
- (id)orientationPreferencesResolutionStage;
- (void)_preferencesResolutionStageDidUpdateComponents:(id)a0 animate:(BOOL)a1;
- (void)dealloc;
- (id)_newUniqueIdentifierForRole:(id)a0;
- (id)_setupStateDump;
- (void)removeObserver:(id)a0;
- (id)_defaultUpdateContextWithReason:(id)a0 animatable:(BOOL)a1;
- (void)_removeForceResolutionSpecifier;
- (id)inputsValidationStage;
- (void)_setNeedsUpdateArbitrationWithClientContext:(id)a0 defaultContext:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)updateArbitrationIfNeeded;
- (void)_inputsValidationStageDidUpdateValidators:(id)a0;
- (void)_addResolutionPolicySpecifierForClientContext:(id)a0;
- (void)_TEMP_89923418_updateZOrderSettingsForInputUI;
- (void).cxx_destruct;
- (id)initWithRolesProvider:(id)a0 inputsDataSource:(id)a1 drawingDataSource:(id)a2;

@end
