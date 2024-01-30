@class FBScene, FBSSceneTransitionContext;

@interface _FBClientSettingObserverContext : NSObject

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0 transitionContext:(id)a1;

@end
