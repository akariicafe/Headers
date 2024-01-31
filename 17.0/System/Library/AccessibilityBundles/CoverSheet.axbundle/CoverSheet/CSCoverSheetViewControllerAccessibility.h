@interface CSCoverSheetViewControllerAccessibility : __CSCoverSheetViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (id)accessibilityCustomActions;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_presentModalViewController:(id)a0 shouldDismissOverlays:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_accessibilityShowWallpaperCollections;
- (BOOL)_axDismissTodayView;
- (BOOL)_axIsCapabilityRestricted:(unsigned long long)a0;
- (BOOL)_axIsTodayViewShowing;
- (BOOL)_axShowCameraView;
- (BOOL)_axShowTodayView;

@end
