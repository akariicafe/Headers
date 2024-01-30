@class FBSSceneSettingsDiff, FBSSceneTransitionContext, FBSSceneClientSettingsDiff, NSSet;

@interface FBSSceneEvent : FBSSceneMessage

@property (nonatomic) long long source;
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) NSSet *actions;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;

@end
