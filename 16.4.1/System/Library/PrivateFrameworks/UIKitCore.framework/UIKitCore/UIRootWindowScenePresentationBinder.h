@class FBSDisplayConfiguration, UIMutableTransformer, NSMutableSet, UIRootSceneWindow;

@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder {
    FBSDisplayConfiguration *_displayConfiguration;
    UIRootSceneWindow *_rootSceneWindow;
    BOOL _shouldManageWindowLifecycle;
    NSMutableSet *_presentedScenes;
}

@property (readonly, nonatomic) UIMutableTransformer *sceneTransformer;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 priority:(long long)a1 appearanceStyle:(unsigned long long)a2 rootWindow:(id)a3;
- (void)_noteDidStopPresentingScene:(id)a0;
- (void)_noteWillStartPresentingScene:(id)a0;
- (id)_rootView;
- (id)initWithIdentifier:(id)a0 priority:(long long)a1 appearanceStyle:(unsigned long long)a2 rootWindow:(id)a3;
- (id)initWithPriority:(long long)a0 displayConfiguration:(id)a1;

@end
