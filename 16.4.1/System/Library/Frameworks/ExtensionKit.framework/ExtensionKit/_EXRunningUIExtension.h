@protocol _EXExtensionSceneFactory;

@interface _EXRunningUIExtension : _EXRunningExtension

@property (retain, nonatomic) id<_EXExtensionSceneFactory> sceneFactory;

+ (id)sharedInstance;

- (id)mainStoryboardNameForViewServiceSessionManager:(id)a0;
- (id)containingViewControllerClassNameForViewServiceSessionManager:(id)a0;
- (void)viewServiceSessionManager:(id)a0 didCreateViewController:(id)a1 contextToken:(id)a2;
- (id)viewControllerClassNameForViewServiceSessionManager:(id)a0;
- (void)checkIn;
- (BOOL)isExtensionViewServiceSessionManager:(id)a0;
- (void)installRunloopObserverToPingLaunchdAfterEvent;
- (BOOL)requiresExtensionContextForViewServiceSessionManager:(id)a0;
- (void).cxx_destruct;

@end
