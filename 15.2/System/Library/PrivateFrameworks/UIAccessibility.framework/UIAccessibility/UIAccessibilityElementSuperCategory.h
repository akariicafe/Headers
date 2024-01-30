@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)focusGroupIdentifier;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingVisibleAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (id)accessibilityLanguage;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)init;
- (id)accessibilityValue;
- (id)initWithAccessibilityContainer:(id)a0;
- (void)_accessibilitySetValue:(id)a0;
- (void)dealloc;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilityUsesFrameInContainerSpace;
- (BOOL)_accessibilityProvidesOwnFrame;

@end
