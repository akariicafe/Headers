@interface AVNowPlayingPlaybackControlsViewControllerAccessibility : __AVNowPlayingPlaybackControlsViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_axAnnounceCurrentScrubPosition;
- (void)_setControlsContainerSubviewsVisible:(BOOL)a0 animated:(BOOL)a1 withCoordinators:(id)a2;
- (void)_axUpdateAccessibilityCustomActions;
- (void)_setPlaybackControlsState:(long long)a0 animated:(BOOL)a1;
- (void)_timerFiredForHidingPlaybackControls:(id)a0;
- (void)didPressLeftArrowB39;
- (void)didPressRightArrowB39;

@end
