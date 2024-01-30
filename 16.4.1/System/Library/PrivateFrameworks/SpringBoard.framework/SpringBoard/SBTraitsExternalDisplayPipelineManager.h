@class NSString, SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider, SBFTraitsParticipant, SBFTraitsArbitrationInputs;

@interface SBTraitsExternalDisplayPipelineManager : SBTraitsPipelineManager <SBFTraitsArbiterInputsDataSource, SBFTraitsParticipantDelegate> {
    SBFTraitsArbitrationInputs *_inputs;
    SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider *_rolesAndDefaultPoliciesProvider;
    SBFTraitsParticipant *_activeOrientationParticipant;
}

@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)orientationStageRoles;
- (void)setupDefaultPipelineForArbiter:(id)a0;
- (id)init;
- (id)zOrderStageRoles;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;

@end
