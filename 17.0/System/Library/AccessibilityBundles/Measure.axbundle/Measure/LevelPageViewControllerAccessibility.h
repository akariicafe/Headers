@interface LevelPageViewControllerAccessibility : __LevelPageViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnounceDegreesIfNeeded:(double)a0;
- (BOOL)_axShouldAnnounce;
- (BOOL)_updateForRotation:(double)a0 shiftAngle:(double)a1;
- (void)_updateOffsetLabel:(double)a0;

@end
