@class NSString, UIViewPropertyAnimator, TUIContinuousSliderView, KeyboardBrightnessClient;

@interface TUIKeyboardBrightnessModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {
    TUIContinuousSliderView *_sliderView;
    KeyboardBrightnessClient *_keyboardBrightnessClient;
}

@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hardwareKeyboardAvailabilityChanged;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)viewForTouchContinuation;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateControls;
- (void)suspendIdleDimming:(BOOL)a0;
- (BOOL)isHardwareKeyboardAvailable;
- (void)sliderValueDidChange:(id)a0;
- (void)updateControlsForValue:(float)a0;

@end
