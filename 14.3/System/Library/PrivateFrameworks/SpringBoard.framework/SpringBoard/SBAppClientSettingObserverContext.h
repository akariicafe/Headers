@class UIApplicationSceneClientSettings, SBDeviceApplicationSceneHandle, SBApplication, FBSSceneTransitionContext, FBScene, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject {
    FBScene *_scene;
    SBApplication *_app;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

- (void).cxx_destruct;

@end
