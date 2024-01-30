@interface CKViewController : UIViewController

@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL deferredAppeared;
@property (nonatomic) BOOL appearing;
@property (nonatomic) BOOL dissapearing;

- (void)significantTimeChange;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillDisappear:(BOOL)a0;
- (void)parentControllerDidBecomeActive;
- (void)performResumeDeferredSetup;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)parentControllerDidResume:(BOOL)a0 animating:(BOOL)a1;
- (void)childViewControllersPerform:(SEL)a0;

@end
