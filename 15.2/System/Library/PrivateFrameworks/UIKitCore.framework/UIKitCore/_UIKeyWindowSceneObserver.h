@class UIScene, NSString;

@interface _UIKeyWindowSceneObserver : NSObject <_UISceneComponentProviding> {
    struct { unsigned char sceneIsObservable : 1; } _observerFlags;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sceneWillInvalidate:(id)a0;
- (id)initWithScene:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (void).cxx_destruct;
- (void)_scene:(id)a0 willTransitionToActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;

@end
