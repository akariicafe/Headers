@interface LARGBCaptureSelfieVCAccessibility : __LARGBCaptureSelfieVCAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_dispatchSkipButtonTimers;
- (void)_toggleFlash:(id)a0;
- (void)captureSelfieDidFinishGestureMonitoring;
- (void)captureSelfieWillMonitorGesture:(long long)a0;
- (void)_axAnnounceSuccess;
- (void)_restartSelfieCapture:(id)a0;

@end
