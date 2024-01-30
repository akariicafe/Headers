@interface CAMCaptureEngineAccessibility : __CAMCaptureEngineAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_handleSessionDidStopRunning:(id)a0;
- (void)_updateCurrentlyConfiguredObjects;
- (void)_handleSessionDidStartRunning:(id)a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 forMetadataObjectTypes:(id)a2 fromConnection:(id)a3;
- (void)_accessibilityDetectFaces:(BOOL)a0 completionBlock:(id /* block */)a1;

@end
