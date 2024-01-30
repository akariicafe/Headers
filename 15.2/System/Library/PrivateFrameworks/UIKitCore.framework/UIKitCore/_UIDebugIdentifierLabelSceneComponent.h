@class UIScene, NSString, _UIDebugIdentifierWindow;

@interface _UIDebugIdentifierLabelSceneComponent : NSObject <_UISceneComponentProviding> {
    _UIDebugIdentifierWindow *_debugWindow;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)_scene:(id)a0 willTransitionToActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;

@end
