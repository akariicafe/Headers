@class SBDeviceApplicationSceneHandle, FBSSceneTransitionContext, FBScene, UIApplicationSceneClientSettings;

@interface SBInternalClientSettingObserverContext : NSObject

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings;
@property (retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transition;

- (void).cxx_destruct;

@end
