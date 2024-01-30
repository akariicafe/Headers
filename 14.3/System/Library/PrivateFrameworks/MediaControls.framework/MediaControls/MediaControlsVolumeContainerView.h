@class MediaControlsRelativeVolumeStepper, NSString, MTVisualStylingProvider, MediaControlsVolumeSlider;

@interface MediaControlsVolumeContainerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MediaControlsRelativeVolumeStepper *volumeStepper;
@property (nonatomic) unsigned int volumeCapabilities;
@property (retain, nonatomic) MediaControlsVolumeSlider *volumeSlider;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic) long long style;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateVolumeCapabilities;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_updateVolumeStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 slider:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
