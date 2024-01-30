@class NSString;
@protocol _UICanvasSceneActionsHandler;

@interface _UISceneCanvasSceneActionsHandler : NSObject <_UISceneBSActionHandler> {
    id<_UICanvasSceneActionsHandler> _canvasSceneActionsHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneArrayFromCanvasArray:(id)a0;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithCanvasSceneActionsHandler:(id)a0;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)_launchOptionsFromActions:(id)a0 forFBSScene:(id)a1 uiSceneSession:(id)a2 transitionContext:(id)a3;

@end
