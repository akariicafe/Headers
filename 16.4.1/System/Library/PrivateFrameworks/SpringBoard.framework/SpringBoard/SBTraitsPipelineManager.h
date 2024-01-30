@class UIKBArbiterClientFocusContext, NSString, SBMedusa1oSettings, SBFTraitsArbiter, SBFTraitsArbitrationInputs;
@protocol SBWindowSceneDelegate;

@interface SBTraitsPipelineManager : NSObject <SBFTraitsArbiterStagesRolesProvider, SBFTraitsArbiterDrawingDataSource, SBFTraitsArbiterInputsDataSource> {
    SBMedusa1oSettings *_medusaSettings;
}

@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (weak, nonatomic) id<SBWindowSceneDelegate> sceneDelegate;
@property (retain, nonatomic) UIKBArbiterClientFocusContext *keyboardFocusContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;

- (id)defaultOrientationAnimationSettingsAnimatable:(BOOL)a0;
- (id)initWithArbiter:(id)a0 sceneDelegate:(id)a1;
- (id)orientationStageRoles;
- (void)setupDefaultPipelineForArbiter:(id)a0;
- (id)init;
- (id)zOrderStageRoles;
- (void).cxx_destruct;
- (id)newBlockBasedOrientationPolicySpecifier:(id /* block */)a0 forParticipant:(id)a1;
- (id)newBlockBasedOrientationPolicySpecifier:(id /* block */)a0 forRole:(id)a1;

@end
