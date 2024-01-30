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

- (void)orientationChanged:(id)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)isActivityIndicatorVisible;
- (void)commonInit;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)colorSpace;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)_startPresentation;
- (void)setActivityIndicatorVisible:(BOOL)a0;
- (void)_startMotion;
- (void)_updateMotion:(long long)a0;
- (void)updateActivityIndicatorWithProgress:(double)a0;
- (void)updateMotion;

@end
