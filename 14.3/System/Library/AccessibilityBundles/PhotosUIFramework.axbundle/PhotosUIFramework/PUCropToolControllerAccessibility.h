@interface PUCropToolControllerAccessibility : __PUCropToolControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)cropAspectFlipperView:(id)a0 cropOrientationSelected:(long long)a1;
- (void)_rotateButtonTapped:(id)a0;
- (void)_flipButtonTapped:(id)a0;
- (void)_aspectButtonTapped:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)toolbarIcon;
- (void)viewDidLoad;
- (void)_axAnnounceFlipOrRotateOrientation;
- (id)_axRotationLabel:(long long)a0;

@end
