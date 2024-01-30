@class NSString;
@protocol _UICanvasSettingsDiffAction;

@interface _UISceneCanvasSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    id<_UICanvasSettingsDiffAction> _canvasDiffAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneArrayFromCanvasArray:(id)a0;

- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (id)initWithCanvasDiffAction:(id)a0;
- (void).cxx_destruct;

@end
