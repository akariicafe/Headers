@class SBDeviceApplicationSceneHandle, NSString, SBApplication, SBSUILoginUISceneClientSettingsDiffInspector, UIView, FBScene, FBApplicationUpdateScenesTransaction;
@protocol UIScenePresenter, SBLoginAppSceneHosterDelegate;

@interface SBLoginAppSceneHoster : NSObject <FBSceneObserver, SBLoginAppSceneHoster> {
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
    FBApplicationUpdateScenesTransaction *_sceneCreateTransaction;
    long long _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    BOOL _hidEventDeferralsInstalled;
}

@property (weak, nonatomic) id<SBLoginAppSceneHosterDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) NSString *hostedAppBundleID;
@property (readonly, nonatomic) NSString *hostedSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBApplication *hostedApp;
@property (nonatomic) BOOL deferHIDEvents;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)sceneDidInvalidate:(id)a0;
- (id)_appClientSettingsDiffInspector;
- (void)updateSettingsWithTransitionBlock:(id /* block */)a0;
- (id)hostedApp;
- (void)_updateHIDEventDeferralsIfNecessary;
- (void)launchLoginAppWithCompletion:(id /* block */)a0;
- (void)killLoginApp;

@end
