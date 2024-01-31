@interface HUAnnounceRecordingViewControllerAccessibility : __HUAnnounceRecordingViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)beginRecording:(id)a0;
- (void)stopRecordAndSend:(id)a0;

@end
