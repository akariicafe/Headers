@class AVPlayerViewController, PMTitleSubtitleView, UIView;

@interface PMRotationViewController : UIViewController

@property (nonatomic) BOOL preventRotation;
@property (nonatomic) struct CGSize { double width; double height; } playerSize;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) double screenHorizontalAspect;
@property (copy) id /* block */ playerDidSwapBlock;
@property (nonatomic) double orientationSwitchTime;
@property (retain, nonatomic) id proVideoPeriodicCaller;
@property (retain, nonatomic) UIView *playerRotationView;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) PMTitleSubtitleView *titleView;
@property (nonatomic) BOOL zoomedToFill;

- (void)viewDidLoad;
- (id)playerItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)externalClientMessedWithPlayerItem;
- (void)gentleRebuild;
- (void)mediaServicesReset;
- (void)ImAfraidOfStuckBlur;
- (void)signalCustomCompositorScheduler;
- (void)signalCustomCompositorScheduler:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 playerRate:(float)a1;
- (void)createAVPlayer;
- (void)destroyAVPlayer;
- (id)_snapshotPlayer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlayerTime;
- (void)refreshCompositionIfNotPlaying;
- (void)adjustPlayerSizeAndViewTransform:(struct CGSize { double x0; double x1; })a0;
- (double)scaleForFullscreen:(struct CGSize { double x0; double x1; })a0;
- (id)_snapshotPlayerWithAspect:(double)a0;
- (void)addProVideoTimeObserver;
- (void)removeProVideoTimeObserver;
- (void)effectRenderedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)extremeRebuild;

@end
