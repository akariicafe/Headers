@interface CAMCaptureControllerAccessibility : __CAMCaptureControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithCaptureConfiguration:(id)a0 zoomFactor:(double)a1 engineOptions:(long long)a2 locationController:(id)a3 motionController:(id)a4 burstController:(id)a5 protectionController:(id)a6 powerController:(id)a7 irisVideoController:(id)a8 remoteShutterController:(id)a9;
- (void)_accessibilityLoadAccessibilityInformation;

@end
