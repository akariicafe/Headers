@class SBApplicationSceneEntity;

@interface SBPIPSceneContentSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}

- (void)_begin;
- (void)_didComplete;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;
- (void).cxx_destruct;

@end
