@interface CAMCaptureEngineAccessibility : __CAMCaptureEngineAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_handleSessionDidStartRunning:(id)a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 forMetadataObjectTypes:(id)a2 fromConnection:(id)a3;
- (void)_handleSessionDidStopRunning:(id)a0;
- (void)_updateCurrentlyConfiguredObjects;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityDetectFaces:(BOOL)a0 completionBlock:(id /* block */)a1;

@end
