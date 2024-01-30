@class FBSSceneTransitionContext, FBSceneUpdateContext, NSString, FBSSceneSettings;

@interface FBProcessWatchdogEventContext : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) FBSceneUpdateContext *sceneUpdateContext;
@property (readonly, nonatomic) FBSSceneSettings *sceneSettings;
@property (readonly, weak, nonatomic) FBSSceneTransitionContext *sceneTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForEvent:(long long)a0 settings:(id)a1 transitionContext:(id)a2;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
