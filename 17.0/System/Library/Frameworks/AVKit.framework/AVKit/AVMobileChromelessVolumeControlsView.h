@class NSString, AVMobileVolumeChromelessButtonControl, UIViewPropertyAnimator, UIView, UIBlurEffect, AVMobileChromelessSlider;
@protocol AVMobileChromelessVolumeControlsViewDelegate;

@interface AVMobileChromelessVolumeControlsView : AVView <AVMobileVolumeChromlesButtonControlDelegate, AVMobileChromelessSliderDelegate, AVShadowCasting> {
    UIView *_volumeControls;
    UIViewPropertyAnimator *_emphasizedAnimator;
    UIBlurEffect *_enabledFilledBarViewEffect;
    UIBlurEffect *_enabledUnfilledBarViewEffect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sliderShadowPathRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _buttonShadowPathRect;
    BOOL _drawsShadow;
}

@property (retain, nonatomic) AVMobileVolumeChromelessButtonControl *volumeButton;
@property (retain, nonatomic) AVMobileChromelessSlider *volumeSlider;
@property (readonly, nonatomic) BOOL isTracking;
@property (weak) id<AVMobileChromelessVolumeControlsViewDelegate> delegate;
@property (nonatomic) BOOL prefersVolumeSliderIncluded;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (nonatomic, getter=isMuted) BOOL mute;
@property (readonly, nonatomic) double volume;
@property (nonatomic, getter=isTrackingEnabled) BOOL allowsVolumeAdjustment;
@property (nonatomic) BOOL volumeSliderHidesWithAlphaChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL drawsShadow;

- (void)sliderDidBeginTracking:(id)a0;
- (void)sliderDidEndTracking:(id)a0;
- (void)_setVolume:(double)a0 forUpdateReason:(unsigned long long)a1;
- (id)init;
- (void)_updateVolumeButtonIconState;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setSliderValue:(double)a0 forUpdateReason:(unsigned long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)volumeControlButtonDidEndPanning:(id)a0;
- (void)setVolume:(double)a0 forUpdateReason:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)volumeControlButtonDidBeginPanning:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_volumeSliderValueDidChange;
- (void)layoutSubviews;
- (BOOL)volumeControlButtonCanBeginPanning:(id)a0;
- (void)_handleVolumeControlButtonTap;
- (void)_layoutVolumeControlView;
- (void)didMoveToWindow;
- (void)volumeControlButton:(id)a0 didContinuePanningWithXDelta:(double)a1;

@end
