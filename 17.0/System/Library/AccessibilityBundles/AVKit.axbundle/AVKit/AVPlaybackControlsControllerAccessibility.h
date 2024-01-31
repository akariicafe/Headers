@interface AVPlaybackControlsControllerAccessibility : __AVPlaybackControlsControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_autoHideControlsAfterDelay:(double)a0;
- (void)playbackControlsViewDidLoad:(id)a0;
- (void)_accessibilityHandlePlayerLayerViewFocused:(id)a0;
- (void)_accessibilityPlayerLayerViewAccessibilityFocusedChanged:(id)a0;
- (void)_axAnnounceAudioControlStateDidChange;
- (BOOL)_axIsMuted;
- (void)_axLoadVolumeButtonAccessibilityInformation:(id)a0;
- (void)_axSetShouldShowRegularControlsBecauseOfAccessibility:(BOOL)a0;
- (BOOL)_axShouldShowRegularControlsBecauseOfAccessibility;
- (BOOL)_axToggleAudioControls:(id)a0;

@end
