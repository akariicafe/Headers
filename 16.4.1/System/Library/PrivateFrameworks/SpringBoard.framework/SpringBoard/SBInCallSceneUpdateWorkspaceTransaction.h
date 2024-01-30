@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}

@property (copy, nonatomic) id /* block */ postSceneUpdateHandler;

- (void)_begin;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;
- (void).cxx_destruct;

@end
