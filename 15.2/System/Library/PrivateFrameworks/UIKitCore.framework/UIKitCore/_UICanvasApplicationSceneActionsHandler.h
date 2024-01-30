@class NSString;

@interface _UICanvasApplicationSceneActionsHandler : _UISceneApplicationActionsHandler <_UICanvasSceneActionsHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)respondToActions:(id)a0 forScene:(id)a1 inCanvas:(id)a2 fromTransitionContext:(id)a3;

@end
