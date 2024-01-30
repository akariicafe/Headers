@class UIApplicationSceneClientSettings, SBDeviceApplicationSceneHandle, SBApplication, FBSSceneTransitionContext, FBScene, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) SBApplication *app;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) UIApplicationSceneSettings *settings;
@property (retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings;
@property (retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transition;

- (void).cxx_destruct;

@end
