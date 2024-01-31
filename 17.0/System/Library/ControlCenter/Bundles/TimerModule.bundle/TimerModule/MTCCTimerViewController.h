@class NSString, CADisplayLink, CCUISteppedSliderView, MTCCTimer;
@protocol MTCCTimerViewControllerDelegate;

@interface MTCCTimerViewController : CCUIButtonModuleViewController <CCUITouchContinuationProviding>

@property (copy, nonatomic) MTCCTimer *internalTimer;
@property (retain, nonatomic) CCUISteppedSliderView *sliderView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) id<MTCCTimerViewControllerDelegate> delegate;
@property (copy, nonatomic) MTCCTimer *timer;
@property (readonly, nonatomic) BOOL ignoringUpdatesDuringSliderTouch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (id)init;
- (void)sliderValueChanged:(id)a0;
- (void)startDisplayLinkUpdates;
- (void)dealloc;
- (void)sliderEditingEnded:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_reloadForCurrentStateAnimated:(BOOL)a0;
- (BOOL)providesOwnPlatter;
- (double)preferredExpandedContinuousCornerRadius;
- (void)setTimer:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (double)preferredExpandedContentHeight;
- (void)stopDisplayLinkUpdates;
- (BOOL)_canShowWhileLocked;
- (double)sliderValueFromRemainingTime:(double)a0;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)displayLinkTick:(id)a0;
- (double)preferredExpandedContentWidth;
- (void)sliderDidBeginEditing:(id)a0;
- (id)viewForTouchContinuation;

@end
