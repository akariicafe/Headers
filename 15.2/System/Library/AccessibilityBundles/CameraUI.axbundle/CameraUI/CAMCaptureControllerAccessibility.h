@interface CAMCaptureControllerAccessibility : __CAMCaptureControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithCaptureConfiguration:(id)a0 engineOptions:(long long)a1 locationController:(id)a2 motionController:(id)a3 burstController:(id)a4 protectionController:(id)a5 powerController:(id)a6 irisVideoController:(id)a7 remoteShutterController:(id)a8;
- (void)_accessibilityLoadAccessibilityInformation;

@end
