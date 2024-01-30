@class NSString, SBUIFlashlightController, UIViewPropertyAnimator, CCUISteppedSliderView;

@interface CCUIFlashlightModuleViewController : CCUIButtonModuleViewController <SBUIFlashlightObserver, CCUIContentModuleContentViewController> {
    SBUIFlashlightController *_flashlight;
    CCUISteppedSliderView *_sliderView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (void)_updateSliderValue;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)_sliderValueDidChange:(id)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidLoad;
- (id)viewForTouchContinuation;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
