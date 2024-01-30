@class SBDeviceApplicationSceneHandle, FBSSceneTransitionContext, FBScene, FBSSceneClientSettings;

@interface SBClientSettingObserverContext : NSObject {
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}

- (void).cxx_destruct;

@end
