@class MRUNowPlayingVolumeSlider, MRUVisualStylingProvider, MRUVolumeStepperView;

@interface MRUNowPlayingVolumeControlsView : UIView

@property (readonly, nonatomic) MRUNowPlayingVolumeSlider *slider;
@property (readonly, nonatomic) MRUVolumeStepperView *stepper;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)updateVolumeCapabilities;

@end
