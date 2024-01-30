@class NSArray, NSString, CCUIContinuousSliderView, CALayer, UIViewPropertyAnimator;
@protocol CCUIDisplayModuleViewControllerDelegate;

@interface CCUIDisplayModuleViewController : UIViewController <CCUIGroupRendering, CCUIContentModuleContentViewController> {
    struct BKSDisplayBrightnessTransaction { } *_brightnessTransaction;
    BOOL _expanded;
}

@property (retain, nonatomic) CCUIContinuousSliderView *sliderView;
@property (weak, nonatomic) id<CCUIDisplayModuleViewControllerDelegate> delegate;
@property (readonly, nonatomic) float currentBrightness;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly, nonatomic) CALayer *punchOutRootLayer;
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

- (void)setGlyphPackageDescription:(id)a0;
- (void)_sliderValueDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)setGlyphState:(id)a0;
- (void)dealloc;
- (id)viewForTouchContinuation;
- (void)loadView;
- (void)_updateWithCurrentBrightnessAnimated:(BOOL)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)_setBacklightLevel:(float)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_noteScreenBrightnessDidChange:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_sliderEditingDidBegin:(id)a0;
- (void)_sliderEditingDidEnd:(id)a0;
- (float)_backlightLevel;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
