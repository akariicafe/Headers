@class UIRootSceneWindow, FBSDisplayConfiguration;

@interface SBRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder

@property (readonly, nonatomic) UIRootSceneWindow *rootWindow;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 priority:(long long)a1 appearanceStyle:(unsigned long long)a2 rootWindow:(id)a3;

@end
