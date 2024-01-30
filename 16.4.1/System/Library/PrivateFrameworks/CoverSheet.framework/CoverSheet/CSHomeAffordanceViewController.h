@class CSHomeAffordanceView, UIHoverGestureRecognizer, UIView, NSMutableArray, SBFHomeGrabberSettings;

@interface CSHomeAffordanceViewController : CSCoverSheetViewControllerBase {
    UIView *_counterRotationView;
    NSMutableArray *_rotationWrapperViews;
    long long _orientation;
    SBFHomeGrabberSettings *_settings;
    UIHoverGestureRecognizer *_suppressAnimationForPointerGestureRecognizer;
    BOOL _suppressAnimationForPointer;
}

@property (readonly, nonatomic) CSHomeAffordanceView *homeAffordanceView;
@property (nonatomic) struct CGPoint { double x; double y; } homeAffordanceOffset;
@property (nonatomic) double homeAffordanceScale;

- (id)_addWrapperViewWithOrientation:(long long)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setLegibilitySettings:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_layoutHomeAffordance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_homeAffordanceRestingFrame;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)setHomeAffordanceOffset:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (void)viewDidLayoutSubviews;
- (void)_handleSuppressAnimationForPointerGesture:(id)a0;

@end
