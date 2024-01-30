@class NSMutableDictionary, SBFTraitsArbitrationDeviceOrientationInputs, NSMutableArray, SBFTraitsArbitrationInputsValidationStage, NSString, NSSet, NSHashTable, SBFTraitsArbitrationKeyboardInputs, NSMutableSet, SBFTraitsArbitrationInterfaceIdiomInputs, NSArray, SBFTraitsArbitrationInputs, SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier;
@protocol BSInvalidatable;

@interface SBFTraitsArbiter : NSObject <BSDescriptionProviding> {
    NSSet *_knownZOrderRoles;
    NSSet *_knownOrientationRoles;
    NSSet *_allKnownRoles;
    NSMutableDictionary *_liveRolesCounter;
    NSMutableDictionary *_acquiredParticipantsByUniqueIdentifier;
    NSMutableDictionary *_acquiredParticipantsByPreferencesType;
    NSMutableSet *_participantsNeedingUpdate;
    NSMutableSet *_updatedParticipants;
    NSMutableArray *_inputsNeedUpdateReasons;
    NSMutableArray *_componentsNeedUpdateReasons;
    NSHashTable *_observers;
    SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier *_resolutionUpdateOrientationSpecifier;
    SBFTraitsArbitrationInputsValidationStage *_inputsValidationStage;
    NSArray *_preferencesResolutionStages;
    SBFTraitsArbitrationInterfaceIdiomInputs *_deviceIdiomInputs;
    SBFTraitsArbitrationDeviceOrientationInputs *_deviceOrientationInputs;
    SBFTraitsArbitrationKeyboardInputs *_keyboardInputs;
    SBFTraitsArbitrationInputs *_lastRawInputs;
    SBFTraitsArbitrationInputs *_lastValidatedInputs;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__setIsUnderTest:(BOOL)a0;
+ (id)_defaultOrientationAnimationSettingsAnimatable:(BOOL)a0;
+ (id)screenStateProvider;
+ (BOOL)__isUnderTest;
+ (void)setScreenStateProvider:(id)a0;

- (void)_setNeedsUpdateArbitrationWithReason:(id)a0 animated:(BOOL)a1;
- (void)_inputsValidationStageDidUpdateValidators:(id)a0;
- (void)_deviceOrientationChanged:(id)a0;
- (void)setNeedsUpdateArbitrationWithContext:(id)a0;
- (void)_setNeedsUpdateArbitrationWithClientContext:(id)a0 defaultContext:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_currentRawDeviceOrientationInputs;
- (id)_newOrderedPreferencesResolutionStages;
- (void)noteArbiterWillBeginTransitionWithContext:(id)a0;
- (id)acquireParticipantWithRole:(id)a0 delegate:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_addResolutionPolicySpecifierForClientContext:(id)a0;
- (void)_participantDidUpdateSettings:(id)a0;
- (id)succinctDescription;
- (id)__forTestingOnly_knownOrientationRoles;
- (id)_newInputsValidationStage;
- (id)orientationPreferencesResolutionStage;
- (void)updateArbitrationIfNeeded;
- (void).cxx_destruct;
- (void)_preferencesResolutionStageDidUpdateComponents:(id)a0 animate:(BOOL)a1;
- (void)_updateArbitrationWithClientContext:(id)a0 defaultContext:(id)a1;
- (void)noteArbiterDidCompleteTransitionWithContext:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)_rawDeviceOrientation;
- (id)inputsValidationStage;
- (id)succinctDescriptionBuilder;
- (id)_defaultUpdateContextWithReason:(id)a0 animatable:(BOOL)a1;
- (id)__forTestingOnly_knownZOrderRoles;
- (void)dealloc;
- (void)_removeForceResolutionSpecifier;
- (void)_invalidateParticipant:(id)a0;
- (id)_setupStateDump;
- (void)_participantDidUpdatePreferences:(id)a0;

@end
