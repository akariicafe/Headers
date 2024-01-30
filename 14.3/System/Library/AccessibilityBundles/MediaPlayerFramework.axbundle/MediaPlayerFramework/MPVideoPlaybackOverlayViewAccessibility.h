@interface MPVideoPlaybackOverlayViewAccessibility : __MPVideoPlaybackOverlayViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)detailSlider:(id)a0 didChangeScrubSpeed:(long long)a1;
- (void)_playbackStateChanged:(id)a0;
- (void)_effectiveScaleModeDidChange:(id)a0;
- (void)_configureTransportControls;
- (void)_updateAirplayButton;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (void)_axUpdatePlayPauseButton;
- (void)_axUpdatePictureInPictureButton;
- (void)_axUpdateScaleButton;
- (void)_axAnnotateLeftRightButtons;
- (void)_axUpdateAirplayButton;
- (void)_axAnnotateAllButtons;

@end
