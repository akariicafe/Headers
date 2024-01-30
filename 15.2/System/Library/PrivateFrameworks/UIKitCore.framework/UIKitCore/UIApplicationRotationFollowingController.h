@interface UIApplicationRotationFollowingController : UIViewController

@property (nonatomic) BOOL sizesWindowToScene;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)window:(id)a0 setupWithInterfaceOrientation:(long long)a1;
- (id)_topMostWindow;
- (id)__autorotationSanityCheckObjectFromSource:(id)a0 selector:(SEL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
