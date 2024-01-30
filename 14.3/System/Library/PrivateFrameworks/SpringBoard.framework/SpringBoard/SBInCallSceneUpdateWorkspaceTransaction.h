@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}

@property (copy, nonatomic) id /* block */ postSceneUpdateHandler;

- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;
- (void).cxx_destruct;
- (void)_begin;

@end
