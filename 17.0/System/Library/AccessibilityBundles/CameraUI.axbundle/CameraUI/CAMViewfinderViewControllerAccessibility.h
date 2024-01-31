@interface CAMViewfinderViewControllerAccessibility : __CAMViewfinderViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_stopCapturingVideo;
- (void)_handleFilterButtonTapped:(id)a0;
- (void)_presentCameraRollViewControllerAnimated:(BOOL)a0 interactive:(BOOL)a1;
- (BOOL)_shouldHideZoomControlForGraphConfiguration:(id)a0;
- (void)_updateBadgeVisibilityAnimated:(BOOL)a0;
- (void)controlStatusBar:(id)a0 didReceiveTapInIndicatorForType:(unsigned long long)a1;
- (void)_updateForShallowDepthOfFieldStatusChangedAnimated:(BOOL)a0;
- (BOOL)_startCapturingVideoWithRequest:(id)a0;
- (void)_embedDescriptionOverlayView:(id)a0 forMode:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateLevelMotionTracking;
- (void)_setCurrentGraphConfiguration:(id)a0;
- (BOOL)accessibilityPerformMagicTap;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateForGraphConfiguration;
- (void)_axUpdateInternalMotionManager;

@end
