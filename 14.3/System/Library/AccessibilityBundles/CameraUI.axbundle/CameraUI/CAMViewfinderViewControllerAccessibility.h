@interface CAMViewfinderViewControllerAccessibility : __CAMViewfinderViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_presentCameraRollViewControllerAnimated:(BOOL)a0 interactive:(BOOL)a1;
- (void)_updateBadgeVisibilityAnimated:(BOOL)a0;
- (void)_embedCTMDescriptionOverlayView;
- (void)controlStatusBar:(id)a0 didReceiveTapInIndicatorForType:(unsigned long long)a1;
- (BOOL)_shouldHideZoomControlForGraphConfiguration:(id)a0;
- (void)_updateLevelMotionTracking;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)accessibilityPerformMagicTap;
- (void)_embedPortraitModeDescriptionOverlayViewWithLayoutStyle:(long long)a0;
- (void)_updateForShallowDepthOfFieldStatusChangedAnimated:(BOOL)a0;
- (void)_handleFilterButtonTapped:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setCurrentGraphConfiguration:(id)a0;
- (void)_axUpdateInternalMotionManager;
- (void)_axUpdateForGraphConfiguration;

@end
