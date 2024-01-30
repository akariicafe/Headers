@class OKRoundProgressView, CMMotionManager, CMAttitude, OKUILabelHUDView, NSOperationQueue;

@interface OKPresentationViewController : OKPresentationViewControllerProxy {
    CMMotionManager *_motionManager;
    long long _motionOrientationReference;
    NSOperationQueue *_motionQueue;
    BOOL _shouldForwardMotion;
    double _motionLastRotationX;
    double _motionLastRotationY;
    double _motionLastRotationZ;
    OKRoundProgressView *_roundProgressView;
}

@property (retain, nonatomic) OKUILabelHUDView *couchLabelHUDView;
@property (retain) CMAttitude *motionAttitudeReference;

- (id)colorSpace;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)commonInit;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)orientationChanged:(id)a0;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_startPresentation;
- (BOOL)isActivityIndicatorVisible;
- (void)setActivityIndicatorVisible:(BOOL)a0;
- (void)updateMotion;
- (void)updateActivityIndicatorWithProgress:(double)a0;
- (void)_updateMotion:(long long)a0;
- (void)_startMotion;

@end
