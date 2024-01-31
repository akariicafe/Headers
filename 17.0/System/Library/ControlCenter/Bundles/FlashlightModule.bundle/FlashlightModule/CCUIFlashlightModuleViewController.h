@class NSString, SBUIFlashlightController, CCUISteppedSliderView;

@interface CCUIFlashlightModuleViewController : CCUIButtonModuleViewController <SBUIFlashlightObserver> {
    SBUIFlashlightController *_flashlight;
    CCUISteppedSliderView *_sliderView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)providesOwnPlatter;
- (double)preferredExpandedContinuousCornerRadius;
- (void)viewDidLoad;
- (double)preferredExpandedContentHeight;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)_sliderValueDidChange:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)preferredExpandedContentWidth;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidDisappear:(BOOL)a0;
- (id)viewForTouchContinuation;
- (void)_updateSliderValue;
- (void)flashlightLevelDidChange:(unsigned long long)a0;

@end
