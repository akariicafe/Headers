@class UIButton, FBSMutableSceneSettings, PRPosterEnvironmentImpl;

@interface PRRenderingSceneViewController : PRSceneViewController <PRRenderingEnvironmentViewControllerDelegate> {
    FBSMutableSceneSettings *_settings;
    PRPosterEnvironmentImpl *_environment;
    UIButton *_button;
}

+ (id)role;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)doThing;
- (void)_updateSceneSettings:(id)a0 transitionContext:(id)a1;
- (void)environmentViewController:(id)a0 didUpdateEnvironment:(id)a1;
- (id)initWithProvider:(id)a0 contents:(id)a1 previewing:(BOOL)a2;

@end
