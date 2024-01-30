@class NSArray, NSString, MRUVisualStylingProvider, MRUContinuousSliderView, MRUVolumeStepperView;

@interface MRUVolumeView : UIView <CCUIGroupRendering>

@property (readonly, nonatomic) MRUContinuousSliderView *primarySlider;
@property (readonly, nonatomic) MRUContinuousSliderView *secondarySlider;
@property (readonly, nonatomic) MRUVolumeStepperView *stepper;
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL showSecondarySlider;
@property (nonatomic) BOOL showStepper;
@property (nonatomic) BOOL primaryInteractionEnabled;
@property (nonatomic) BOOL secondaryInteractionEnabled;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
