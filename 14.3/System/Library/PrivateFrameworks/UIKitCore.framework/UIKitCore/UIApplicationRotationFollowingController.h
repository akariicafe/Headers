@interface UIApplicationRotationFollowingController : UIViewController

@property (nonatomic) BOOL sizesWindowToScene;

- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)a0;
- (id)__autorotationSanityCheckObjectFromSource:(id)a0 selector:(SEL)a1;
- (void)window:(id)a0 setupWithInterfaceOrientation:(long long)a1;
- (id)_topMostWindow;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;

@end
