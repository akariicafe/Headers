@interface CAMPreviewViewControllerAccessibility : __CAMPreviewViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_setUserLockedFocusAndExposure:(BOOL)a0 shouldAnimate:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setGraphConfiguration:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)captureControllerWillResetFocusAndExposure:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateForCaptureDevice;

@end
