@class UIScene, NSString;

@interface UIPointerLockState : NSObject <_UISceneComponentProviding> {
    long long _status;
}

@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_windowScene;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (id)windowHostingScene;
- (void)_pointerLockStatusUpdated;
- (void)_preferredPointerLockStatusUpdated;

@end
