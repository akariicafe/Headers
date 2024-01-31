@interface PUCropToolControllerAccessibility : __PUCropToolControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_aspectButtonTapped:(id)a0;
- (void)_flipButtonTapped:(id)a0;
- (void)_rotateButtonTapped:(id)a0;
- (void)cropAspectFlipperView:(id)a0 cropOrientationSelected:(long long)a1;
- (id)toolbarIcon;
- (void)_axAnnounceFlipOrRotateOrientation;
- (id)_axRotationLabel:(long long)a0;

@end
