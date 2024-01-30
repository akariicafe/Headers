@class UIScene, NSString;
@protocol _UICanvasComponentProviding;

@interface _UISceneCanvasComponent : NSObject <_UISceneComponentProviding> {
    Class canvasComponentClass;
    id<_UICanvasComponentProviding> _canvasComponent;
}

@property (readonly, nonatomic) id<_UICanvasComponentProviding> canvasComponent;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sceneWillInvalidate:(id)a0;
- (id)initWithScene:(id)a0;
- (void)_scene:(id)a0 didTransitionFromActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;
- (id)_settingsDiffActionsForScene:(id)a0;
- (id)_actionHandlersForScene:(id)a0;
- (id)initWithCanvasComponent:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_scene:(id)a0 willTransitionToActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;

@end
