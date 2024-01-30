@class SBDeviceApplicationSceneHandle, FBSSceneTransitionContext, FBScene, UIApplicationSceneClientSettings;

@interface SBInternalClientSettingObserverContext : NSObject {
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

- (void).cxx_destruct;

@end
