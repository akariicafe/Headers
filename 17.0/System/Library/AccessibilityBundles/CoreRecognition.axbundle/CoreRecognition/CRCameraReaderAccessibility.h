@interface CRCameraReaderAccessibility : __CRCameraReaderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)loadView;
- (void)startSession;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)sendDidFindTarget:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)sendDidRecognizeNewObjects:(id)a0;
- (id)_accessibilityCameraView;

@end
